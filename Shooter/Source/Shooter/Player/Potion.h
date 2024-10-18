// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Potion.generated.h"

UCLASS()
class SHOOTER_API APotion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APotion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interacted();
	bool GetActive();

private:
	UPROPERTY()
		bool active;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class UStaticMeshComponent* mesh;
};
