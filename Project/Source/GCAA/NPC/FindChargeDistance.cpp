// Fill out your copyright notice in the Description page of Project Settings.


#include "FindChargeDistance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "blackboard_keys.h"
#include "BaseNpcController.h"
#include "MantleNpc.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

UFindChargeDistance::UFindChargeDistance(FObjectInitializer const& object_initailizer)
{
	NodeName = TEXT("FindChargeDistance");
}

EBTNodeResult::Type UFindChargeDistance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//gets the player character and the npcs controller
	if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		if (auto const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
		{
			if (AMantleNpc* const NPC = Cast<AMantleNpc>(controller->GetPawn()))
			{
				controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player->GetActorLocation() + (player->GetActorForwardVector() * -200));

				NPC->playChargeSound();
				FNavLocation location;

				//if (UNavigationSystemV1* const nav_system = UNavigationSystemV1::GetCurrent(GetWorld()))
				//{
				//	if (nav_system->GetRandomPointInNavigableRadius(player->GetActorLocation() + (NPC->GetActorForwardVector() + 200), 100, location, nullptr))
				//	{
				//		controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), location.Location);

				//	}
				//}

				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}

		}

	}

	return EBTNodeResult::Failed;
}


