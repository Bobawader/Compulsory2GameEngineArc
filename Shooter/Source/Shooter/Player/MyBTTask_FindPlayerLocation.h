// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UMyBTTask_FindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UMyBTTask_FindPlayerLocation(FObjectInitializer const& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search");
	bool SearchRandom = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Search");
	float SearchRadius = 1000.f;

};
