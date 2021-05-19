////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "EnvironmentController.h"
#include "Components/BoxComponent.h"
#include "EnvironmentItem.h"
#include "Interactable.h"

// Sets default values
AEnvironmentController::AEnvironmentController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a root componenent and associated bounding box and mesh sub components.
	ECRootComponent = CreateDefaultSubobject<USceneComponent> ( TEXT ( "Root" ) );
	RootComponent = ECRootComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "StaticMesh" ) );

	Box = CreateDefaultSubobject<UBoxComponent> ( TEXT ( "CollisionComp1" ) );
	Box->SetupAttachment ( ECRootComponent );
	Box->SetGenerateOverlapEvents ( true );

	SetActorTickEnabled ( false );

	bWaitingToInteract = false;

}

// Called when the game starts or when spawned
void AEnvironmentController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnvironmentController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Player has overlapped environment controller, but now monitor for Interaction button being pressed.






}

/////////////////////////////////////////////////////////////////////////////////////////////////
// This function locates al the Items in the world which the Controller operates.
// If the Activator property names match and the IInteractable interface has been implemented
// then interaction will proceed.
//
/////////////////////////////////////////////////////////////////////////////////////////////////
void AEnvironmentController::InteractWithAllConnectedEnvironmentItems ()
{
	// Get all Environment Items in the world as an Environment Controller may be attached to many Items,
	// a lever may operate many platforms and/or doors if the designer requires this.
	for (TActorIterator<AEnvironmentItem> pIterator ( GetWorld () ); pIterator; ++pIterator)
	{
		// Cast pIterator to Envrionment Item
		AEnvironmentItem* cItemActorFound = Cast<AEnvironmentItem> ( *pIterator );

		// Allow the interaction to occur if the Activator property names match.
		if (cItemActorFound->Activator == this->Activator)
		{
			//Check if Environment item implements the Interactable interface.
			if (pIterator->GetClass ()->ImplementsInterface ( UInteractable::StaticClass () ))
			{
				IInteractable::Execute_PerformInteract ( cItemActorFound );
			}
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// This function returns a Boolean result if the input parameter OtherActor is the Player
/////////////////////////////////////////////////////////////////////////////////////////////////

bool AEnvironmentController::CheckThatOtherActorIsPlayer ( AActor* OtherActor )
{
	AActor* pPlayer = UGameplayStatics::GetPlayerPawn ( this, 0 );
	if (OtherActor == pPlayer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void AEnvironmentController::DisplayInteractionWidget ()
{
	pMessageToPlayerUI_Interact = CreateWidget<UMessageToPlayerUI> ( GetWorld (), UI_MessageToPlayer );
	if (pMessageToPlayerUI_Interact)
	{
		pMessageToPlayerUI_Interact->AddToViewport ();
	}
	
}

void AEnvironmentController::RemoveInteractionWidget ()
{
	if (pMessageToPlayerUI_Interact)
	{
		if (pMessageToPlayerUI_Interact->IsVisible ())
		{
			pMessageToPlayerUI_Interact->RemoveFromViewport ();
		}
	}
}

