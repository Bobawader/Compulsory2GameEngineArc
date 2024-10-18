// Fill out your copyright notice in the Description page of Project Settings.
#include "Shooter/Player/MyBTTask_FindRandomLocation.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Shooter/Player/MyEnemy_AIController.h"



UMyBTTask_FindRandomLocation::UMyBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Random Location In NavMesh";
}

EBTNodeResult::Type UMyBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get AI controller and its MyEnemy

	if (AMyEnemy_AIController* const cont = Cast<AMyEnemy_AIController>(OwnerComp.GetAIOwner())) {
		if (auto* const myenemy = cont->GetPawn()) {

			//get MyEnemey location to use as origin

			auto const Origin = myenemy->GetActorLocation();

			//get navigation system and create random location
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld())) {

				FNavLocation Loc;
				if (NavSys->GetRandomPointInNavigableRadius(Origin, SearchRadius, Loc)) {

					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
				}

				//finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}

		}
	}
	//return Super::ExecuteTask(OwnerComp, NodeMemory);
	return EBTNodeResult::Failed;
}
