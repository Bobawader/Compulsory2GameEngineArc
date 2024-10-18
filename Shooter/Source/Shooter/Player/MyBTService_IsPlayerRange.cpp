// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Player/MyBTService_IsPlayerRange.h"
#include "Shooter/Player/MyEnemy_AIController.h"
#include "Shooter/Player/MyEnemy.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

UMyBTService_IsPlayerRange::UMyBTService_IsPlayerRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player In Melee Range");
}

void UMyBTService_IsPlayerRange::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto const* const cont = Cast<AMyEnemy_AIController>(OwnerComp.GetAIOwner());
	auto const* const enemy = Cast<AMyEnemy>(cont->GetPawn());

	auto const* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), enemy->GetDistanceTo(player) <= MeleeRange);
}
