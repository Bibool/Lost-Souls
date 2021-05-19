// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuPlayerController.h"
#include "MenuHUD.h"

AMainMenuPlayerController::AMainMenuPlayerController()
{

}

void AMainMenuPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if( InputComponent )
	{
		InputComponent->BindAction("OpenMainMenu", IE_Pressed, this, &AMainMenuPlayerController::OpenMainMenu);
	}
}

void AMainMenuPlayerController::OpenMainMenu()
{
	if( AMenuHUD* MenuHUD = Cast<AMenuHUD>(GetHUD()) )
	{
		MenuHUD->ShowMenu();
	}
}