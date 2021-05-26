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
				//Gets the players location and the forward vector and then sets the target move to position to be behind the player so the NPC will charge Behind the player
				controller->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player->GetActorLocation() + (player->GetActorForwardVector() * -200));

				//Plays a sound while charging 
				NPC->playChargeSound();
				FNavLocation location;
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}

		}

	}

	return EBTNodeResult::Failed;
}


