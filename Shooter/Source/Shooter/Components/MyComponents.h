// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyComponents.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER_API UMyComponents : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyComponents();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};

struct PositionComponent
{
    FVector Position;
};

struct HealthComponent
{
    float CurrentHealth;
    float MaxHealth;
};

struct DamageComponent
{
    float DamageAmount;
};

struct InventoryComponent
{
    int PotionCount;
};

struct ProjectileComponent
{
    float Speed;
    float Lifespan;
};

struct InputComponent
{
    FVector2D MoveInput;
    FVector2D LookInput;
    bool JumpInput;
    bool FireInput;
    bool InteractInput;
};
