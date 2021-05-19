// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackNotifyState.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseNpc.h"

// casts to the npc and calls the attack start and end function
void UAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if(MeshComp && MeshComp->GetOwner())
	{
		if(ABaseNpc* const character = Cast <ABaseNpc> (MeshComp->GetOwner()))
		{
			character->AttackStart();
		}
	}
}

void UAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		if (ABaseNpc* const character = Cast <ABaseNpc>(MeshComp->GetOwner()))
		{
			character->AttackEnd();
		}
	}
}
