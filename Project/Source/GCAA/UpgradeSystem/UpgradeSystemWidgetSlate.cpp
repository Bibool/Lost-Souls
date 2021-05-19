// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystemWidgetSlate.h"

#define LOCTEXT_NAMESPACE "UpgradeSystem"


void UpgradeSystemWidgetSlate::Construct(const FArguments& InArgs)
{
	// Where the UI is contructed

	//Padding
	const FMargin ContentPadding = FMargin(500.f, 300.f);

	// Title Text
	const FText TitleText = LOCTEXT("DialogueBoxName", "Congratulations, you can choose your upgrade !");

	ChildSlot
		[
			// Background
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
		.	VAlign(VAlign_Fill)
			[
				SNew(SImage)
				.ColorAndOpacity(FColor::Black)
			]
			
			
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(ContentPadding)
			[
				// Title Text
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Text(TitleText)
				]
			]
		];
}


#undef LOCTEXT_NAMESPACE