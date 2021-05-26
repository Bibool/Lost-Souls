// Fill out your copyright notice in the Description page of Project Settings.


#include "EnableOrDisableMeleeCollision.h"
#include "BaseNPCController.h"
#include "BaseNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which gets the npcs attack change and checks the attack range from the players location 

UEnableOrDisableMeleeCollision::UEnableOrDisableMeleeCollision(FObjectInitializer const& ObjectInitializer)
{
	NodeName = TEXT("UEnableOrDisableMeleeCollision");
}

EBTNodeResult::Type UEnableOrDisableMeleeCollision::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// get AI controller and its NPC
	if (auto const Cont = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseNpc* const NPC = Cast<ABaseNpc>(Cont->GetPawn()))
		{
			//This function calls the enable or disable melee collision function inside the npc
			if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
			{
				NPC->enableOrDisableMeleeCollision();
				// finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
