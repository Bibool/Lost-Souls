// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CMainPlayerController.h"
#include "GCAA/Player/CPlayer.h"
#include "MessageToPlayerManager/MessageToPlayerManager.h"
#include "UI/PauseMenu.h"
#include "CGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API ACGameMode : public AGameMode
{
	GENERATED_BODY()

	//Constructor
	ACGameMode();

public:

	virtual void InitGame ( const FString& MapName, const FString& Options, FString& ErrorMessage ) override;
	 
	UPauseMenu* cPauseMenu;
};
