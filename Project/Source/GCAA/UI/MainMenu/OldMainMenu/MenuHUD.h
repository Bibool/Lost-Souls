// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

/**
 *
 */
UCLASS()
class GCAA_API AMenuHUD : public AHUD
{
	GENERATED_BODY()

protected:

	TSharedPtr<class SMainMenuWidget> MainMenuWidget;
	TSharedPtr<class SWidget> MainMenuWidgetContainer;

	virtual void BeginPlay() override;

public:

	void ShowMenu();
	void RemoveMenu();
};