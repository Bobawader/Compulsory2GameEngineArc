// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterGame.h"
#include "Shooter/Components/MyComponents.h"


//AShooterGame::AShooterGame()
//{
//    PrimaryActorTick.bCanEverTick = true;
//}
//
//void AShooterGame::BeginPlay()
//{
//    Super::BeginPlay();
//    CreatePlayer();
//}
//
//void AShooterGame::Tick(float DeltaTime)
//{
//    Super::Tick(DeltaTime);
//
//    HandleInput(DeltaTime);
//
//    MovementSystem::Update(world, DeltaTime);
//    CombatSystem::Update(world, DeltaTime);
//    ProjectileSystem::Update(world, DeltaTime);
//
//    // Add more system updates as needed
//}
//
//void AShooterGame::CreatePlayer()
//{
//    // Change the variable name to avoid hiding the class member
//    Entity newPlayerEntity = world.CreateEntity();
//
//    // Ensure components are being added correctly
//    world.AddComponent(newPlayerEntity, PositionComponent{ FVector::ZeroVector });
//    world.AddComponent(newPlayerEntity, HealthComponent{ 100.0f, 100.0f });
//    //world.AddComponent(newPlayerEntity, InputComponent()); // Default constructor
//    world.AddComponent(newPlayerEntity, InventoryComponent{ 0 });
//}
//
//void AShooterGame::HandleInput(float DeltaTime)
//{
//    // Implement input handling here and update the player's InputComponent
//}