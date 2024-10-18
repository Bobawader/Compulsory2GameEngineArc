// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Player/Projectile.h"
#include "Shooter/Player/MyEnemy.h"

AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = true;

    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    SetRootComponent(ProjectileMesh);
    ProjectileMesh->SetSimulatePhysics(true);
    ProjectileMesh->SetNotifyRigidBodyCollision(true);
    ProjectileMesh->SetCollisionProfileName(TEXT("Projectile"));

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->UpdatedComponent = ProjectileMesh;
    ProjectileMovement->InitialSpeed = ProjectileSpeed;
    ProjectileMovement->MaxSpeed = ProjectileSpeed;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 0.0f;

    InitialLifeSpan = 3.0f;
}

void AProjectile::BeginPlay()
{
    Super::BeginPlay();

    ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
}

void AProjectile::FireInDirection(const FVector& ShootDirection)
{
    ProjectileMovement->Velocity = ShootDirection * ProjectileSpeed;
}

void AProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    AMyEnemy* Enemy = Cast<AMyEnemy>(OtherActor);
    if (Enemy)
    {
        // Apply damage using the TakeDamage method
        Enemy->TakeDamage(DamageAmount);

        // Destroy the projectile
        Destroy();

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Projectile hit enemy!"));
            FString HealthText = FString::Printf(TEXT("Enemy Health: %.1f"), Enemy->CurrentHealth);
            GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, HealthText);
        }
    }
}


//AProjectile::AProjectile()
//{
//
//    PrimaryActorTick.bCanEverTick = true;
//
//    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
//    SetRootComponent(ProjectileMesh);
//    ProjectileMesh->SetSimulatePhysics(true);
//    ProjectileMesh->SetNotifyRigidBodyCollision(true);
//    ProjectileMesh->SetGenerateOverlapEvents(true);
//
//    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
//    ProjectileMovement->UpdatedComponent = ProjectileMesh;
//    ProjectileMovement->InitialSpeed = ProjectileSpeed;
//    ProjectileMovement->MaxSpeed = ProjectileSpeed;
//    ProjectileMovement->bRotationFollowsVelocity = true;
//    ProjectileMovement->bShouldBounce = true;
//    ProjectileMovement->ProjectileGravityScale = 0.0f; // Set to 0 for no gravity, or adjust as needed
//
//    InitialLifeSpan = 3.0f;
//
//}
//
//void AProjectile::FireInDirection(const FVector& ShootDirection)
//{
//    ProjectileMovement->Velocity = ShootDirection * ProjectileSpeed;
//}
//
//// Called when the game starts or when spawned
//void AProjectile::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AProjectile::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}



