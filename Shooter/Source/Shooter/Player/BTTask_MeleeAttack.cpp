// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Player/BTTask_MeleeAttack.h"
#include "Shooter/Player/CombatInterface.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Engine/LatentActionManager.h"
#include "Components/SkeletalMeshComponent.h"

UBTTask_MeleeAttack::UBTTask_MeleeAttack()
{
	NodeName = TEXT("Melee Attack");
}

EBTNodeResult::Type UBTTask_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto const OutOfRange = !OwnerComp.GetBlackboardComponent()->GetValueAsBool(GetSelectedBlackboardKey());
	if (OutOfRange) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}

	auto const* const cont = OwnerComp.GetAIOwner();
	auto* const enemy = Cast<AMyEnemy>(cont->GetPawn());

	if (auto* const icombat = Cast<ICombatInterface>(enemy)) {
		if (MontageHasFinished(enemy)) {
			icombat->Execute_MeleeAttack(enemy);
		}
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Type();
}

bool UBTTask_MeleeAttack::MontageHasFinished(AMyEnemy* const enemy)
{
	return enemy->GetMesh()->GetAnimInstance()->Montage_GetIsStopped(enemy->GetMontage());
}
