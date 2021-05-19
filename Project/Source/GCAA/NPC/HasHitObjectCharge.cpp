// Fill out your copyright notice in the Description page of Project Settings.


#include "HasHitObjectCharge.h"
#include "BaseNPCController.h"
#include "MantleNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which gets the npcs attack change and checks the attack range from the players location 

UHasHitObjectCharge::UHasHitObjectCharge()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("HasHitObjectCharge");

}

void UHasHitObjectCharge::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	

	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	//gets the npc
	//gets the npc
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (AMantleNpc* const npc = Cast<AMantleNpc>(controller->GetPawn()))
		{
			if(npc->GetActorLocation() == npc->getChargeDistance() + 100 || npc->GetActorLocation() == npc->getChargeDistance() - 100)
			{
				npc->setHitObject(true);
			}
			//checks if the npc is supposed to be patrolling or not
			controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::charged_into_object,
				npc->getHitObject());
		}
	}
}
