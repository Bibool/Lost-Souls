// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningCastNotify.h"

#include "GCAA/Player/CPlayer.h"


void ULightningCastNotify::Notify( USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation )
{
    if (MeshComp && MeshComp->GetOwner())
    {
        if (ACPlayer* const player = Cast <ACPlayer>( MeshComp->GetOwner() ))
        {
            player->SendLightning();
        }
    }
}
