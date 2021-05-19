// Fill out your copyright notice in the Description page of Project Settings.

#include "ChangeToRunSpeed.h"
#include "AIController.h"
#include "MovingNpc.h"
#include "BaseNPCController.h"
#include "GameFramework/CharacterMovementComponent.h"

//simple class which gets and sets the npcs move speed to its runspeed, is used for when the npc is chasing the player
UChangeToRunSpeed::UChangeToRunSpeed()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("ChangeToRunSpeed");
}


void UChangeToRunSpeed::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);
	
	if (auto const controller = OwnerComp.GetAIOwner())
	{
		if (AMovingNpc* const NPC = Cast<AMovingNpc>(controller->GetPawn()))
		{
			if (NPC->getIsActive() == true)
			{
				NPC->GetCharacterMovement()->MaxWalkSpeed = NPC->getRunSpeed();
			}
			else if (NPC->getIsActive() == false)
			{
				NPC->GetCharacterMovement()->MaxWalkSpeed = 0.0f;
			}

		}
	}
}

FString UChangeToRunSpeed::GetStaticDescription() const
{
	return FString("Changes the NPCs speed");
}
