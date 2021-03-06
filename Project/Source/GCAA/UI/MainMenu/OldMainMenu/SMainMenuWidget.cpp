///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SMainMenuWidget.h"
#include "MenuHUD.h"
#include "GameFramework/PlayerController.h"
#include "GCAA/Player/CPlayer.h"

#define LOCTEXT_NAMESPACE "MainMenu"

void SMainMenuWidget::Construct(const FArguments& InArgs)
{
	bCanSupportFocus = true;

	OwningHUD = InArgs._OwningHUD;

	// Padding of buttons
	const FMargin ContentPadding = FMargin(500.f, 300.f);
	const FMargin ButtonPadding = FMargin(10.f);

	const FText TitleText = LOCTEXT("GameTitle", "Lost Soul");
	const FText PlayText = LOCTEXT("PlayGame", "Play");
	const FText SettingsText = LOCTEXT("Settings", "Settings");
	const FText QuitText = LOCTEXT("QuitGame", "Quit Game");

	FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	ButtonTextStyle.Size = 40.0f;

	FSlateFontInfo TitleTextStyle = ButtonTextStyle;
	TitleTextStyle.Size = 60.0f;

	ChildSlot
		[ // Background
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
				.ColorAndOpacity(FColor::Black)
			]
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(ContentPadding)
			[
				SNew(SVerticalBox)
				// Title Text
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(TitleText)
					.Justification(ETextJustify::Center)
				]
				// Play Button
				+ SVerticalBox::Slot()
				.Padding(ButtonPadding)
					[
						SNew(SButton)
						.OnClicked(this, &SMainMenuWidget::OnPlayClicked)
						[
							SNew(STextBlock)
							.Font(ButtonTextStyle)
							.Text(PlayText)
							.Justification(ETextJustify::Center)
						]

					]

				// Settings Button
				+ SVerticalBox::Slot()
					.Padding(ButtonPadding)
					[
						SNew(SButton)
						[
							SNew(STextBlock)
							.Font(ButtonTextStyle)
							.Text(SettingsText)
							.Justification(ETextJustify::Center)
						]

					]

				// Quit Button
				+ SVerticalBox::Slot()
					.Padding(ButtonPadding)
					[
						SNew(SButton)
						.OnClicked(this, &SMainMenuWidget::OnQuitClicked)
						[
							SNew(STextBlock)
							.Font(ButtonTextStyle)
							.Text(QuitText)
							.Justification(ETextJustify::Center)
						]
					]
				]
		 ];

	if( APlayerController* PC = OwningHUD->PlayerOwner )
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}
}

FReply SMainMenuWidget::OnPlayClicked() const
{
	if( OwningHUD.IsValid() )
	{
		OwningHUD->RemoveMenu();
	}

	// BIB EDIT BEGIN -----------------------------------------------------------------------------------------------//
	// Find the player character through the world and cast it to our player class so we can tell it to draw the UI.
	ACPlayer* pcPlayer = Cast<ACPlayer>(OwningHUD->GetWorld()->GetFirstPlayerController()->GetCharacter());
	// Safety check so we don't crash in case it returns a nullptr
	if ( pcPlayer )
	{
		pcPlayer->DrawUI();
	}
	// BIB EDIT END   -----------------------------------------------------------------------------------------------//

	
	return FReply::Handled();
}

FReply SMainMenuWidget::OnQuitClicked() const
{
	if( OwningHUD.IsValid() )
	{
		if( APlayerController* PC = OwningHUD->PlayerOwner )
		{
			PC->ConsoleCommand("Quit.");
		}
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE