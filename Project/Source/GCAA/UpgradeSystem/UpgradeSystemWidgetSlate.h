// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

/**
 * 
 */
class UpgradeSystemWidgetSlate : public SCompoundWidget
{
public:

	//Reference to the HUD
	// Passing HUD class into the widget

	SLATE_BEGIN_ARGS(UpgradeSystemWidgetSlate) {}

	SLATE_ARGUMENT(TWeakObjectPtr<class AUpgradeSystemHUD>, OwningHUD) 

	SLATE_END_ARGS()

	// Contruction function for the widget
	void Construct(const FArguments& InArgs);

	// The HUD that created the widget
	TWeakObjectPtr<class AUpgradeSystemHUD> OwningHUD;
};
