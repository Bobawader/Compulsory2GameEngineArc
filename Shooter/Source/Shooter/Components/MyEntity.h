// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyEntity.generated.h"

UCLASS()
class SHOOTER_API AMyEntity : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyEntity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


//class Entity {
//public:
//	Entity() : ID(GenerateUniqueID()) {} 
//	Entity(int id) : ID(id) {} 
//
//	int GetID() const { return ID; }
//
//private:
//	int ID;
//	static int GenerateUniqueID() {
//		static int currentID = 0;
//		return currentID++;
//	}
//};

