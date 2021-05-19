////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "CPickup.h"
#include "Engine.h"
#include "CPickupContainer.h"


// Sets default values
ACPickup::ACPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a root componenent and associated bounding box and mesh sub components.
	PickupRootComponent = CreateDefaultSubobject<USceneComponent> ( TEXT ( "Root" ) );
	RootComponent = PickupRootComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "StaticMesh" ) );
	StaticMesh->SetupAttachment ( PickupRootComponent );

	Box = CreateDefaultSubobject<UBoxComponent> ( TEXT ( "CollisionComp" ) );
	Box->SetGenerateOverlapEvents ( true );
	Box->OnComponentBeginOverlap.AddDynamic ( this, &ACPickup::OnOverlapBegin );
	Box->SetupAttachment ( PickupRootComponent );

	ContainerNumber = 0;
}

// Called when the game starts or when spawned
void ACPickup::BeginPlay()
{
	Super::BeginPlay();

	// Build process was complaining about these AttachToComponents should not be in constructor.
	// So have moved to here.

}

// Called every frame
void ACPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
/*
ACPickupContainer* ACPickup::IsPickupContainerFound ( int ContNumber )
{
	// Search the world for a matching container number
	for (TActorIterator<ACPickupContainer> pIterator ( GetWorld () ); pIterator; ++pIterator)
	{
		// Cast pIterator to Container type.
		ACPickupContainer* cContainerFound = Cast<ACPickupContainer> ( *pIterator );

		if (cContainerFound->ContainerNumber == ContNumber)
		{
			return  cContainerFound;
		}
	}
	UE_LOG ( LogTemp, Error, TEXT ( "CPickup.cpp - attempted to find a pickup container number in the world that does not exist." ) );
	return nullptr;
}

bool ACPickup::IsPickupContainerOpen ( ACPickupContainer* theContainer )
{
	if (!theContainer->IsContainerClosed())
	{
		// Container open;
		return true;
	}
	else
	{
		// Container closed;
		return false;
	}
}
*/

/*void ACPickup::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{

}
*/




//void ACPickup::AttemptToCollect ()
//{

	// shold not need this as sub class provides functionality


//}