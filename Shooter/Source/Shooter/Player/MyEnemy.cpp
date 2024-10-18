// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Player/MyEnemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "TimerManager.h"
#include <Kismet/GameplayStatics.h>




AMyEnemy::AMyEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    GetMesh()->SetMobility(EComponentMobility::Movable);
    GetMesh()->SetCollisionProfileName(TEXT("PhysicsActor"));
    GetMesh()->SetSimulatePhysics(true);
    GetMesh()->BodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->BodyInstance.SetObjectType(ECC_PhysicsBody);
    GetMesh()->BodyInstance.SetResponseToAllChannels(ECR_Block);

    // Assign the Skeletal Mesh and Physics Asset
    static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMeshAsset(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny_Simple"));
    if (SkeletalMeshAsset.Succeeded())
    {
        GetMesh()->SetSkeletalMesh(SkeletalMeshAsset.Object);
        GetMesh()->SetPhysicsAsset(LoadObject<UPhysicsAsset>(nullptr, TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny_Simple_Physics")));
    }

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}




UBehaviorTree* AMyEnemy::GetBehaviorTree() const
{
    return Tree;
}

UAnimMontage* AMyEnemy::GetMontage() const
{
    return Montage;
}

void AMyEnemy::InitializeECS(EntityManager* manager)
{
    entityManager = manager;
    enemyEntity = entityManager->CreateEntity();

    FMyPositionComponent positionComp = { GetActorLocation() };
    FMyHealthComponent healthComp = { MaxHealth, MaxHealth };
    FMyDamageableComponent damageableComp = { true };
    FMyEnemyTagComponent enemyTagComp;

    entityManager->AddComponent(enemyEntity, positionComp);
    entityManager->AddComponent(enemyEntity, healthComp);
    entityManager->AddComponent(enemyEntity, damageableComp);
    entityManager->AddComponent(enemyEntity, enemyTagComp);

}

//void AMyEnemy::BeginPlay()
//{
//    Super::BeginPlay();
//    if (entityManager) {
//        UpdateECSHealth();
//    }
//}

void AMyEnemy::BeginPlay()
{
    Super::BeginPlay();

    // Initialize the entity manager here, or pass it from another class
    entityManager = new EntityManager();

    // Create the enemy entity
    enemyEntity = entityManager->CreateEntity();

    // Optionally, add components to the enemy entity here
    FMyHealthComponent healthComponent = { MaxHealth, MaxHealth };
    entityManager->AddComponent(enemyEntity, healthComponent);
}



void AMyEnemy::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Cancel any pending destruction
    GetWorld()->GetTimerManager().ClearTimer(DestructionTimerHandle);

    // Ensure the entity is removed from ECS if it hasn't been already
    if (entityManager && !bIsBeingDestroyed)
    {
        entityManager->DestroyEnemy(enemyEntity, GetWorld());
    }
}

void AMyEnemy::TakeDamage(float DamageAmount)
{
    if (bIsDead || bIsBeingDestroyed) return;

    CurrentHealth -= DamageAmount;
    CurrentHealth = FMath::Max(CurrentHealth, 0.0f);

    UpdateECSHealth();

    if (CurrentHealth <= 0)
    {
        InitiateDestruction();
    }
}

int AMyEnemy::MeleeAttack_Implementation()
{
    GEngine->AddOnScreenDebugMessage(1, 2, FColor::Orange, TEXT("Attack!"));

    if (Montage) {
        PlayAnimMontage(Montage);
    }

    APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    
        // Define damage amount
     float damageAmount = 10.0f; // Adjust as needed

        // Apply damage to the player
     playerCharacter->TakeDamage(damageAmount);
   

    return 0;
}




void AMyEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsDead || bIsBeingDestroyed) return;

    if (entityManager)
    {
        auto positionComp = entityManager->GetComponent<FMyPositionComponent>(enemyEntity);
        if (positionComp)
        {
            positionComp->Position = GetActorLocation();
        }


    }
}

void AMyEnemy::InitiateDestruction()
{
    if (bIsDead || bIsBeingDestroyed) return;

    bIsDead = true;
    bIsBeingDestroyed = true;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Enemy is Dead!"));
    }

    // Queue destruction for the next frame
    GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AMyEnemy::FinalizeDestruction);
}

void AMyEnemy::FinalizeDestruction()
{
    if (entityManager && IsValid(GetWorld()))
    {
        entityManager->DestroyEnemy(enemyEntity, GetWorld());
    }
    Destroy();
}

void AMyEnemy::UpdateECSHealth()
{
    if (entityManager)
    {
        auto healthComp = entityManager->GetComponent<FMyHealthComponent>(enemyEntity);
        if (healthComp)
        {
            healthComp->CurrentHealth = CurrentHealth;
        }
    }
}

