////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "EnvironmentItem.h"

// Sets default values
AEnvironmentItem::AEnvironmentItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initializing the static mesh of the actor
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "StaticMesh" ) );
}

// Called when the game starts or when spawned
void AEnvironmentItem::BeginPlay()
{
	Super::BeginPlay();
}

void AEnvironmentItem::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );

	//Advancing the timeline in every tick
	cMyTimeline.TickTimeline ( DeltaTime );
}
