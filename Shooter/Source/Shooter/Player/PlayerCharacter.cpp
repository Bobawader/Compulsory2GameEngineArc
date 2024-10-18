
#include "Shooter/Player/PlayerCharacter.h"
#include "Shooter/Components/HealthComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerStart.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Shooter/Player/MyEnemy.h"
#include "EngineUtils.h"






APlayerCharacter::APlayerCharacter() {
    PrimaryActorTick.bCanEverTick = true;


    SetupStimulusSource();
    // Initialize EntityManager
    entityManager = std::make_unique<EntityManager>();
    playerEntity = entityManager->CreateEntity();
    movementSystem = std::make_unique<MovementSystem>();
    damageSystem = std::make_unique<DamageSystem>();

    // Initialize components with default values
    FMyPositionComponent positionComponent = { FVector(0,0,0) };
    FMyHealthComponent healthComponent = { 80.0f, 100.0f }; // Initialize with default health values
    FMyPotionComponent potionComponent = { 0 }; // Initialize with default potion count
    FMyInputComponent inputComponent = { FVector2D(0, 0), FVector2D(0, 0) };



    // Add components to the entity
    entityManager->AddComponent(playerEntity, positionComponent);
    entityManager->AddComponent(playerEntity, healthComponent);
    entityManager->AddComponent(playerEntity, potionComponent);
    entityManager->AddComponent(playerEntity, inputComponent);


    // Previous setup
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // Adjusted to a more typical value

    GetCharacterMovement()->JumpZVelocity = 300.f;
    GetCharacterMovement()->AirControl = 0.35f;
    GetCharacterMovement()->MaxWalkSpeed = 500.f;
    GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
    GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
    Camera->SetupAttachment(RootComponent);
    Camera->bUsePawnControlRotation = true;
    Camera->SetRelativeLocation(FVector(0, 0, 100));

    CollectionRange = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionRange"));
    CollectionRange->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    CollectionRange->SetSphereRadius(100.0f);


    FireOffset = FVector(100.0f, 0.0f, 0.0f);
}

void EntityManager::DestroyEnemy(Entity entity, UWorld* worldContext)
{
    // Find and destroy the corresponding Unreal Actor
    for (TActorIterator<AMyEnemy> It(worldContext); It; ++It)
    {
        AMyEnemy* Enemy = *It;
        if (Enemy && Enemy->enemyEntity == entity)
        {
            Enemy->Destroy();  // Safely destroy the actor
            m_EntityMasks[entity].reset();  // Remove all components associated with the entity
            break;  // Exit once the enemy is found and destroyed
        }
    }
}


void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

    entityManager->GetPosition(playerEntity)->Position = GetActorLocation();
    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
    if (Inventory) {
        Inventory->SetActorHiddenInGame(true);
    }
}


void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    // Set up action bindings
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // Jumping
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

        // Moving
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);

        // Looking
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

        //Interact
        EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Interact);

        //Fire
        EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Fire);

        //SpawnEnemy
        EnhancedInputComponent->BindAction(SpawnAction, ETriggerEvent::Triggered, this, &APlayerCharacter::DebugSpawnEnemy);
    }

}



void APlayerCharacter::Interact()
{
    TArray<AActor*> InRangeItems;
    CollectionRange->GetOverlappingActors(InRangeItems);

    // Debug message for interaction
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Interact called.")));

    auto* potionComp = entityManager->GetComponent<FMyPotionComponent>(playerEntity);
    auto* healthComp = entityManager->GetComponent<FMyHealthComponent>(playerEntity);

    for (int i = 0; i < InRangeItems.Num(); i++)
    {
        APotion* const TestItem = Cast<APotion>(InRangeItems[i]);
        if (TestItem && IsValid(TestItem) && TestItem->GetActive()) {
            TestItem->Interacted();

            if (potionComp) {
                potionComp->PotionCount++;
                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Potion collected. New count: %d"), potionComp->PotionCount));
            }
        }
    }

    // Use potion if available and health is not full
    if (potionComp && healthComp && potionComp->PotionCount > 0 && healthComp->CurrentHealth < healthComp->MaxHealth) {
        healthComp->CurrentHealth += 10.0f;  // Increase health by 10 (or any value)
        healthComp->CurrentHealth = FMath::Clamp(healthComp->CurrentHealth, 0.0f, healthComp->MaxHealth);
        potionComp->PotionCount--;  // Use one potion
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Used a potion. New Health: %f, Remaining Potions: %d"), healthComp->CurrentHealth, potionComp->PotionCount));
    }

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("After interaction - Health: %f, Potions: %d"),
        healthComp ? healthComp->CurrentHealth : 0.0f,
        potionComp ? potionComp->PotionCount : 0));
}

void APlayerCharacter::TakeDamage(float damageAmount)
{
    // Access the health component from the EntityManager
    if (entityManager->HasComponent<FMyHealthComponent>(playerEntity))
    {
        auto healthComp = entityManager->GetComponent<FMyHealthComponent>(playerEntity);

        if (healthComp && healthComp->CurrentHealth > 0)
        {
            healthComp->CurrentHealth -= damageAmount;

            // Clamp health to prevent going negative
            healthComp->CurrentHealth = FMath::Max(0.0f, healthComp->CurrentHealth);

            // Check if the player is dead
            if (healthComp->CurrentHealth <= 0)
            {
                GEngine->AddOnScreenDebugMessage(1, 2, FColor::Red, TEXT("DEAD"));
            }
        }
    }
}



void APlayerCharacter::SetupStimulusSource()
{
    StimulusSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
    if (StimulusSource) {
        StimulusSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
        StimulusSource->RegisterWithPerceptionSystem();
    }
}



void APlayerCharacter::Move(const FInputActionValue& Value)
{
    // Get the movement vector from the input value
    FVector2D MovementVector = Value.Get<FVector2D>();

    // Update ECS input component
    auto* inputComp = entityManager->GetInput(playerEntity);
    inputComp->MovementInput = MovementVector;

    if (Controller != nullptr)
    {
        // Find forward and right vectors relative to the camera
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // Add movement using Unreal's character movement system
        AddMovementInput(ForwardDirection, MovementVector.Y);
        AddMovementInput(RightDirection, MovementVector.X);
    }
}




void APlayerCharacter::Look(const FInputActionValue& Value)
{
    // input is a Vector2D
    FVector2D LookAxisVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // add yaw and pitch input to controller
        AddControllerYawInput(-LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}


void APlayerCharacter::Fire(const FInputActionValue& Value)
{
    if (ProjectileClass)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FVector Location;
            FRotator Rotation;
            FVector CameraForward;

            // Get the camera transform
            if (Camera)
            {
                Location = Camera->GetComponentLocation();
                Rotation = Camera->GetComponentRotation();
                CameraForward = Camera->GetForwardVector();
            }
            else
            {
                // Fallback to the character's transform if camera is not available
                Location = GetActorLocation();
                Rotation = GetActorRotation();
                CameraForward = GetActorForwardVector();
            }

            FVector SpawnLocation = Location + Rotation.RotateVector(FireOffset);

            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = GetInstigator();

            AProjectile* Projectile = World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, Rotation, SpawnParams);
            if (Projectile)
            {
                Projectile->FireInDirection(CameraForward);
            }
        }
    }
}

void APlayerCharacter::DebugSpawnEnemy(const FInputActionValue& Value)
{
    FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 200.0f;
    SpawnEnemy(SpawnLocation);
}


void APlayerCharacter::SpawnEnemy(FVector SpawnLocation)
{
    if (EnemyClass && entityManager)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

            AMyEnemy* Enemy = World->SpawnActor<AMyEnemy>(EnemyClass, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
            if (Enemy)
            {
                Enemy->InitializeECS(entityManager.get());
            }
        }
    }
}



void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (entityManager)
    {
        // Update ECS systems
        movementSystem->Update(*entityManager, DeltaTime);
        damageSystem->Update(*entityManager, GetWorld());

        // Sync Unreal character position with ECS position
        auto* positionComp = entityManager->GetPosition(playerEntity);
        if (positionComp)
        {
            positionComp->Position = GetActorLocation();
        }
    }
}






