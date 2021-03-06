////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "OptionsMenuUI.h"
#include "PauseMenuUI.h"

UOptionsMenuUI::UOptionsMenuUI ( const FObjectInitializer& ObjectInitializer ) : Super ( ObjectInitializer )
{
	ConstructorHelpers::FClassFinder<UCreditMenuUI> ItemClassFinder ( TEXT ( "/Game/Blueprints/UI/UI_CreditMenu" ) );

	if (ItemClassFinder.Succeeded ())
	{
		CreditMenuClass = ItemClassFinder.Class;
	}
	else
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "Could not find the BP for UI_CreditMenu!" ) );
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UOptionsMenuUI::NativeConstruct ()
{
	Super::NativeConstruct ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UOptionsMenuUI::NativeTick ( const FGeometry& MyGeometry, float InDeltaTime )
{
	Super::NativeTick ( MyGeometry, InDeltaTime );

	if (!UGameplayStatics::IsGamePaused( GetWorld () ))
	{
		this->RemoveFromParent ();
		
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UOptionsMenuUI::CreditsButtonClicked ()
{
	HideVisibility ();

	pCreditMenu = CreateWidget<UCreditMenuUI> ( GetWorld ()->GetFirstPlayerController (), CreditMenuClass );
	pCreditMenu->AddReturnPointer ( this );
	pCreditMenu->AddToViewport ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UOptionsMenuUI::ReturnButtonClicked ()
{
	if (pReturnPtr)
	{
		pReturnPtr->RestoreVisibility ();
	}
	this->RemoveFromParent ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UOptionsMenuUI::AddReturnPointer ( UPauseMenuUI* ptrToReturnMenu )
{
	pReturnPtr = ptrToReturnMenu;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UOptionsMenuUI::HideVisibility ()
{
	this->RemoveFromParent ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UOptionsMenuUI::RestoreVisibility ()
{
	this->AddToViewport ();
}
