// Fill out your copyright notice in the Description page of Project Settings.


#include "CGameMode.h"
#include "Blueprint/UserWidget.h"
#include "CMainPlayerController.h"
#include "GCAA/UpgradeSystem/UpgradeSystemHUD.h"

ACGameMode::ACGameMode()
	:
	AGameMode()
{
	
	// GameMode Parameters can be changed manually here when needed

	//PlayerControllerClass = ACMainPlayerController::StaticClass();

	DefaultPawnClass = ACPlayer::StaticClass();

	// Added Main Menu slate to GameMode
	//PlayerControllerClass		= AMainMenuPlayerController::StaticClass();
	//HUDClass					= AMenuHUD::StaticClass();

	HUDClass = AUpgradeSystemHUD::StaticClass();

	cPauseMenu = nullptr;
}


void ACGameMode::InitGame ( const FString& MapName, const FString& Options, FString& ErrorMessage )
{
	Super::InitGame ( MapName, Options, ErrorMessage );
	cPauseMenu = NewObject<UPauseMenu> ();

	if (cPauseMenu)
	{
   		cPauseMenu->Initialise ();
	}
}