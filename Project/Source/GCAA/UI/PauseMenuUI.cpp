////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PauseMenuUI.h"
#include "JournalMenuUI.h"
#include "Engine.h"
#include "GCAA/Player/CPlayer.h"

UPauseMenuUI::UPauseMenuUI ( const FObjectInitializer& ObjectInitializer ) : Super ( ObjectInitializer )
{
	ConstructorHelpers::FClassFinder<UOptionsMenuUI> OptionsClassFinder ( TEXT ( "/Game/Blueprints/UI/UI_OptionsMenu" ) );

	if (OptionsClassFinder.Succeeded ())
	{
		OptionsMenuClass = OptionsClassFinder.Class;
	}
	else
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "Could not find the BP for UI_OptionsMenu!" ) );
	}

	ConstructorHelpers::FClassFinder<UJournalMenuUI> JournalClassFinder ( TEXT ( "/Game/Blueprints/UI/UI_JournalMenu" ) );

	if (JournalClassFinder.Succeeded ())
	{
		JournalMenuClass = JournalClassFinder.Class;
	}
	else
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "Could not find the BP for UI_JournalMenu!" ) );
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::NativeConstruct ()
{
	Super::NativeConstruct ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::NativeTick ( const FGeometry& MyGeometry, float InDeltaTime )
{
	Super::NativeTick ( MyGeometry, InDeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::ResumeButtonClicked ()
{
	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );

	if (pPlayer) 
	{
		pPlayer->ResumeGameFromOptionsMenu ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::OptionsButtonClicked ()
{
	HideVisibility ();
	pOptionsMenu = CreateWidget<UOptionsMenuUI> ( GetWorld ()->GetFirstPlayerController (), OptionsMenuClass );
	pOptionsMenu->AddReturnPointer ( this );
	pOptionsMenu->AddToViewport ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::JournalButtonClicked ()
{

	HideVisibility ();

	pJournalMenu = CreateWidget<UJournalMenuUI> ( GetWorld ()->GetFirstPlayerController (), JournalMenuClass );
	pJournalMenu->JournalMenuWasDisplayedInstantlyOnPickup = false;
	pJournalMenu->AddReturnPointer ( this );

	pJournalMenu->AddToViewport ();
	pJournalMenu->UpdateJournal (1);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::AddPointerToPlayerInventory ( UPlayerInventoryUI* pPlayerInvInput )
{
	pPlayerInv = pPlayerInvInput;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::HideVisibility ()
{
	this->RemoveFromParent ();

	if (pPlayerInv)
	{
		pPlayerInv->HideVisibility ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPauseMenuUI::RestoreVisibility ()
{
	this->AddToViewport ();

	if (pPlayerInv)
	{
		pPlayerInv->RestoreVisibility ();
	}
}
