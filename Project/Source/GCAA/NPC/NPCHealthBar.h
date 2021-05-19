// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <GCAA/UI/Health/BaseHealthUI.h>

#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "NPCHealthBar.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UNPCHealthBar : public UBaseHealthUI
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;
	void set_bar_value_percent(float const value);
	
protected:

};

