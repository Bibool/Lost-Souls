// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystemHUD.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GCAA/Player/CPlayer.h"

void AUpgradeSystemHUD::BeginPlay()
{
	Super::BeginPlay();
	

	//AActor* pCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	//ACPlayer* pPlayer = Cast<ACPlayer>(pCharacter);

	//pPlayer->bUpgradeSystemUiActivated;

	//if (pPlayer->bUpgradeSystemUiActivated == true)
	//{ 
		
		// Here lauch the UI
		//UpgradeWidget = SNew(UpgradeSystemWidget).OwningHUD(this);

	//}
	//else
	//{
		//UE_LOG(LogTemp, Warning, TEXT("You're a loser"));

	//}

}
