////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PauseMenu.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"

UPauseMenu::UPauseMenu ()
{
	bGameIsPaused = false;
}

void UPauseMenu::Initialise ()
{
	FPlayerPauseGameDelegate::FPlayerPauseGame.AddUObject ( this, &UPauseMenu::PauseGameAndDisplayOptionsMenu );
}

void UPauseMenu::PauseGameAndDisplayOptionsMenu ()
{

}

void UPauseMenu::ResumeGameFromOptionsMenu ()
{

}




