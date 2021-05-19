////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CPickupContainer.h"

// Sets default values
ACPickupContainer::ACPickupContainer ()
{

	PrimaryActorTick.bCanEverTick = true;
	bWaitingToInteract = false;

	ECRootComponent = CreateDefaultSubobject<USceneComponent> ( TEXT ( "Root" ) );
	RootComponent = ECRootComponent;

	ContainerStaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "ContainerStaticMesh" ) );
	ContainerStaticMesh->SetupAttachment ( ECRootComponent );

	ContainerLid = CreateDefaultSubobject<UCPickupContainerLid> ( TEXT ( "ContainerLid" ) );
	ContainerLid->SetupAttachment ( ECRootComponent );

	LidStaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "ContainerLidStaticMesh" ) );
	LidStaticMesh->SetupAttachment ( ContainerLid );

	Box = CreateDefaultSubobject<UBoxComponent> ( TEXT ( "CollisionBox" ) );
	Box->SetupAttachment ( ContainerStaticMesh );
	Box->SetGenerateOverlapEvents ( true );
	Box->OnComponentBeginOverlap.AddDynamic ( this, &ACPickupContainer::OnOverlapBegin );
	Box->OnComponentEndOverlap.AddDynamic ( this, &ACPickupContainer::OnOverlapEnd );

	ContainerNumber = 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::BeginPlay ()
{
	Super::BeginPlay ();
	UE_LOG ( LogTemp, Warning, TEXT ( "(CHEST)BEGIN_PLAY" ) );

	// Event listener for the player interacting with the container.
	FPlayerInteractingDelegate::FPlayerInteracting.AddUObject ( this, &ACPickupContainer::RespondToInteractionCommand );

	UE_LOG ( LogTemp, Warning, TEXT ( "(CHEST)BEGIN_PLAY - container number passed to lid (%f)"),ContainerNumber );
	ContainerLid->AssociatedContainerNumber = ContainerNumber;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	UE_LOG ( LogTemp, Warning, TEXT ( "(CHEST)ON_OVERLAP.BEGIN" ) );

	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		// Removed at request of designer 17/5/2021 before final build.
		//DisplayInteractionWidget ();
		bWaitingToInteract = true;
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex )
{

	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		// Removed at request of designer 17/5/2021 before final build.
		//RemoveInteractionWidget ();
		bWaitingToInteract = false;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::RespondToInteractionCommand ()
{
	if (bWaitingToInteract)
	{
		ContainerLid->PerformLidMovement ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool ACPickupContainer::CheckThatOtherActorIsPlayer ( AActor* OtherActor )
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::DisplayInteractionWidget ()
{
	// Call the UI to display a message asking the user to press a key to interact with this.

	pMessageToPlayerUI = CreateWidget<UMessageToPlayerUI> ( GetWorld (), UI_MessageToPlayer );
	if (pMessageToPlayerUI)
	{
		pMessageToPlayerUI->DisplayInteractMessage();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACPickupContainer::RemoveInteractionWidget ()
{
	// Call the UI to remove the interaction message.

	if (pMessageToPlayerUI)
	{
		if (pMessageToPlayerUI->IsVisible ())
		{
			pMessageToPlayerUI->RemoveFromViewport ();
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool  ACPickupContainer::IsContainerClosed ()
{
	return ContainerLid->bIsClosed;
}
