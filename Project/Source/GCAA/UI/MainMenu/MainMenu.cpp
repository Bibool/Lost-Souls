///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "MainMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct()
{
	//if( PlayBtn )
	//{
	//	PlayBtn->OnClicked.AddDynamic(this, &UMainMenu::OnPlayClicked);
	//}

	if( QuitBtn )
	{
		QuitBtn->OnClicked.AddDynamic(this, &UMainMenu::OnQuitClicked);
	}
}

void UMainMenu::OnPlayClicked()
{
	//UWorld* World = GetWorld();

	//if( World )
	//{
	//	UGameplayStatics::OpenLevel(World, TEXT("ExampleLevel"));
	//}
}

void UMainMenu::OnQuitClicked()
{
	UWorld* World = GetWorld();

	if( World )
	{
		UKismetSystemLibrary::ExecuteConsoleCommand(World, TEXT("quit"));
	}
}