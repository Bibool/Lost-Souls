// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// Set this to true or false to disable project wide usage of this library.
// This will only affect debug functions used from this header.

bool bUseDebugSymbols = true;

namespace DEBUG
{
	//namespace TEXT
	//{
	//	#define TO_LOG(text) if (bUseDebugSymbols) { UE_LOG(LogTemp, Warning, TEXT(text)); }
	//	#define TO_SCREEN( text ) if (bUseDebugSymbols) { GEngine->AddOnScreenDebugMessage( -1, 5.f, FColor::Red, TEXT( text ) ); }
	//}
	//namespace NUM
	//{
	//	#define TO_SCREEN_WITH_NUM( num ) if (bUseDebugSymbols) { GEngine->AddOnScreenDebugMessage( -1, 5.f, FColor::Red, FString::Printf( TEXT( "%f" ), num ) ); }
	//}
}