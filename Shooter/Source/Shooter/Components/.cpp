// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Components/MyEntity.h"

// Sets default values
AMyEntity::AMyEntity()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

