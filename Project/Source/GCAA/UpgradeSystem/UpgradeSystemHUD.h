// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UpgradeSystemHUD.generated.h"

/**
 * 
 */
UCLASS()

class GCAA_API AUpgradeSystemHUD : public AHUD
{
	GENERATED_BODY()

protected: 

	TSharedPtr<class SMainMenuWidget> UpgradeSystemWidget;
	TSharedPtr<class SWidget> UpgradeSystemWidgetContainer;

	virtual void BeginPlay() override;

	class ACPlayer* pCPlayer;
	
};
