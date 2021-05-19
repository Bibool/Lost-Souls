// Fill out your copyright notice in the Description page of Project Settings.


#include "FindRandomLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "BaseNpcController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "blackboard_keys.h"

UFindRandomLocation::UFindRandomLocation(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("Find Random Location");
}

EBTNodeResult::Type UFindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get AI controller and its NPC
	if (auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (auto const NPC = Cont->GetPawn())
		{
			// obtain npc location to use as an origin location
			FVector const Origin = NPC->GetActorLocation();

			// get the navigation system and generate a random location on the NavMesh
			if (UNavigationSystemV1* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Location;
				if (NavSystem->GetRandomPointInNavigableRadius(Origin, SearchRadius, Location, nullptr))
				{

					OwnerComp.GetBlackboardComponent()->SetValueAsVector(bb_keys::target_location, Location.Location);
				}

				// finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
