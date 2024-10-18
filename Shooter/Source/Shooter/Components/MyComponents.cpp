// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Components/MyComponents.h"

// Sets default values for this component's properties
UMyComponents::UMyComponents()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UMyComponents::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UMyComponents::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



