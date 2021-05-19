// Copyright Epic Games, Inc. All Rights Reserved.

#include "GCAAGameMode.h"
#include "GCAACharacter.h"
#include "UObject/ConstructorHelpers.h"

AGCAAGameMode::AGCAAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AGCAAGameMode::EndGame()
{
}

void AGCAAGameMode::LevelComplete()
{
}

void AGCAAGameMode::LoadNextLevel()
{
}