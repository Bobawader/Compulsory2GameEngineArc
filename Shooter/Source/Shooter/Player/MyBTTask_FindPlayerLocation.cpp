// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter/Player/MyBTTask_FindPlayerLocation.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PlayerCharacter.h"



UMyBTTask_FindPlayerLocation::UMyBTTask_FindPlayerLocation(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UMyBTTask_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get player character
	if (auto* const PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))) {

		//get player location to use as origin
		auto const PlayerLocation = PlayerCharacter->GetActorLocation();
		if (SearchRandom) {
			
			FNavLocation Loc;

			// get the navigation system and generate a random locatuin near the player
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld())) {

				//try and get a random location near the player
				if (NavSys->GetRandomPointInNavigableRadius(PlayerLocation, SearchRadius, Loc)) {

					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
		else {
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerLocation);
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
