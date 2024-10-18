// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "MyBTService_IsPlayerRange.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UMyBTService_IsPlayerRange : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UMyBTService_IsPlayerRange();
	void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float MeleeRange = 200.f;

private:
	
};
