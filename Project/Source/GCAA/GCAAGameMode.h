// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GCAAGameMode.generated.h"

UCLASS(minimalapi)
class AGCAAGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGCAAGameMode();
	void EndGame();
	void LevelComplete();
	void LoadNextLevel();
};



