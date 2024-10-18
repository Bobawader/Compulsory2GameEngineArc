
#include "Shooter/Player/Potion.h"

// Sets default values
APotion::APotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	active = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;
}

// Called when the game starts or when spawned
void APotion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APotion::Interacted() {
	active = false;
	SetActorHiddenInGame(true);
	Destroy();
}

bool APotion::GetActive() {
	return active;
}
