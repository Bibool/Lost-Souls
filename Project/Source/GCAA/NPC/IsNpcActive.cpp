// Fill out your copyright notice in the Description page of Project Settings.


#include "IsNpcActive.h"
#include "BaseNPCController.h"
#include "BaseNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"


//simple class which gets the npcs attack change and checks the attack range from the players location 

UIsNpcActive::UIsNpcActive()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("isNpcActive");

}

void UIsNpcActive::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	//gets the npc
	//gets the npc
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseNpc* const npc = Cast<ABaseNpc>(controller->GetPawn()))
		{

			//checks if the npc is supposed to be patrolling or not
			controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::is_npc_active,
				npc->getIsActive());
		}
	}
}