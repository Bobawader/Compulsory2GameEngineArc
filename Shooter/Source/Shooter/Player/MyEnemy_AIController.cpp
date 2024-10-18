// Fill out your copyright notice in the Description page of Project Settings.
#include "Shooter/Player/MyEnemy_AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "Shooter/Player/MyEnemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Shooter/Player/PlayerCharacter.h"



AMyEnemy_AIController::AMyEnemy_AIController(FObjectInitializer const& ObjectInitializer)
{
	SetupPerceptionSystem();
}

void AMyEnemy_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (AMyEnemy* const enemy = Cast<AMyEnemy>(InPawn)) {
		if (UBehaviorTree* const tree = enemy->GetBehaviorTree()) {
			UBlackboardComponent* b;
			UseBlackboard(tree->BlackboardAsset, b);
			Blackboard = b;
			RunBehaviorTree(tree);
		}
	}
}

void AMyEnemy_AIController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	if (SightConfig) {
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
		SightConfig->SightRadius = 500.f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 25.f;
		SightConfig->PeripheralVisionAngleDegrees = 90.f;
		SightConfig->SetMaxAge(5.f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AMyEnemy_AIController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense((*SightConfig));
	}
}

void AMyEnemy_AIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if (auto* const ch = Cast<APlayerCharacter>(Actor)) {
		GetBlackboardComponent()->SetValueAsBool("CanSeePlayer", Stimulus.WasSuccessfullySensed());
	}
}
