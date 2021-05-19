// Fill out your copyright notice in the Description page of Project Settings.


#include "WindblastCastNotify.h"

#include "GCAA/Player/CPlayer.h"

void UWindblastCastNotify::Notify( USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation )
{
	if (MeshComp && MeshComp->GetOwner())
	{
		if (ACPlayer* const player = Cast <ACPlayer>( MeshComp->GetOwner() ))
		{
			player->SendWindblast();
		}
	}
}
