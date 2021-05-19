// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "blackboard_keys.h"
#include "BaseNpcController.h"

UFindPlayerLocation::UFindPlayerLocation(FObjectInitializer const& object_initailizer)
{
	NodeName = TEXT("FindPlayerLocation");
}

EBTNodeResult::Type UFindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the player character and the npcs controller
	if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		if (auto const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
		{
			//get Player location to use as an origin location
			FVector const player_location = player->GetActorLocation();
			if (search_random)
			{
				FNavLocation location;

				//gets the navigation system and generates a location next to the player

				if (UNavigationSystemV1* const nav_system = UNavigationSystemV1::GetCurrent(GetWorld()))
				{
					if (nav_system->GetRandomPointInNavigableRadius(player_location, search_radius, location, nullptr))
					{
						controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), location.Location);

					}
				}
			}
			else
			{
				controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player_location);
			}

			//finishes with success
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}

