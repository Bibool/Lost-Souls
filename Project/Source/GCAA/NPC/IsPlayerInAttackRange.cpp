// Fill out your copyright notice in the Description page of Project Settings.


#include "IsPlayerInAttackRange.h"
#include "BaseNPCController.h"
#include "BaseNpc.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

//simple class which gets the npcs attack change and checks the attack range from the players location 

UIsPlayerInAttackRange::UIsPlayerInAttackRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player In Attack Range");

}

void UIsPlayerInAttackRange::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	//gets the npc
	if (ABaseNpcController* const controller = Cast<ABaseNpcController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseNpc* const npc = Cast<ABaseNpc>(controller->GetPawn()))
		{
			//gets the player character
			if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
			{

				//write true or false depending on how far away the player is from the enemies melee range
				controller->GetBlackboardComponent()->SetValueAsBool(bb_keys::player_is_in_attack_range,
					npc->GetDistanceTo(player) <= npc->getAttackRange());
			}
		}
	}
}