// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Shooter/Player/MyEnemy.h"
#include "BTTask_MeleeAttack.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UBTTask_MeleeAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTask_MeleeAttack();
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
private:
	bool MontageHasFinished(AMyEnemy* const enemy);
	
};
