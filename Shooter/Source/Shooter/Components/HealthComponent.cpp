
#include "Shooter/Components/HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{

	//PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bCanEverTick = false;
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHealthComponent::Die()
{
	if (Health <= 0)
		true;
}

void UHealthComponent::TakeDamage(int Damage)
{
	Health -= Damage;
}

