// Fill out your copyright notice in the Description page of Project Settings.

#include "CKeyPickup.h"
#include "GCAA/Player/CPlayer.h"
#include "Sound/SoundBase.h"
#include "engine.h"


// Static event for inventory pickup collection. 
FAttemptToCollectInventoryPickupDelegate::FAttemptToCollectInventoryPickupSignature FAttemptToCollectInventoryPickupDelegate::FAttemptPickup;


ACKeyPickup::ACKeyPickup ()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PickupType = EPickupType::Key;

}

// Called when the game starts or when spawned
void ACKeyPickup::BeginPlay ()
{
	Super::BeginPlay ();

	

}

// Called every frame
void ACKeyPickup::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );

}






void  ACKeyPickup::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	// Check this is the player picking up the item and not an enemy or projectile for example.
	AActor* pPlayer = UGameplayStatics::GetPlayerPawn ( this, 0 );
	if (OtherActor == pPlayer)
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "KEY (ON OVERLAP) BEGIN..." ) );
		
		// If a container number is specified then the pickup must be inside a container.
		// So check if container is open before allowing collection.
		// Note if the container is not found with matching number or the container is found but is closed then doing nothing
		// in both cases.


		// This below can go up to parent...

		 /*
		if (ContainerNumber > 0)
		{
			ACPickupContainer* theContainer;
			theContainer = IsPickupContainerFound ( ContainerNumber );
			if (theContainer)
			{
				if (IsPickupContainerOpen ( theContainer ))
				{
					// Broadcast to any listeners that an attempt to collect a pickup is occuring.
					FAttemptToCollectInventoryPickupDelegate::FAttemptPickup.Broadcast ( this );
				}

			}

		}
		else
		{
			// Pickup is not inside a container so can be attempted to be picked up immediately.
			// Broadcast to any listeners that an attempt to collect a pickup is occuring.
			FAttemptToCollectInventoryPickupDelegate::FAttemptPickup.Broadcast ( this );
		}


		*/

		FAttemptToCollectInventoryPickupDelegate::FAttemptPickup.Broadcast ( this );

		// Play Collection Sound
		PlayCollectionAudio();
	}
}


void ACKeyPickup::PlayCollectionAudio()
{
	UGameplayStatics::SpawnSoundAtLocation(this, CollectionSound, GetActorLocation());
}





void  ACKeyPickup::AttemptToCollect ()
{
	UE_LOG ( LogTemp, Warning, TEXT ( "(KEY_PICKUP - attemp to pickup called" ) );
	FAttemptToCollectInventoryPickupDelegate::FAttemptPickup.Broadcast ( this );

}