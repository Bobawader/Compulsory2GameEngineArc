// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"

//UCLASS()
//class SHOOTER_API AProjectile : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AProjectile();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//	UPROPERTY(EditAnywhere)
//		class UStaticMeshComponent* ProjectileMesh;
//
//	UPROPERTY(EditAnywhere)
//		class UProjectileMovementComponent* ProjectileMovement;
//
//
//	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
//		float ProjectileSpeed = 3000.0f;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	void FireInDirection(const FVector& ShootDirection);
//};

UCLASS()
class SHOOTER_API AProjectile : public AActor
{
    GENERATED_BODY()

public:
    AProjectile();

    UPROPERTY(VisibleAnywhere, Category = "Components")
        UStaticMeshComponent* ProjectileMesh;

    UPROPERTY(VisibleAnywhere, Category = "Components")
        UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
        float ProjectileSpeed = 3000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
        float DamageAmount = 10.0f;

    void FireInDirection(const FVector& ShootDirection);

protected:
    virtual void BeginPlay() override;

private:
    UFUNCTION()
        void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
