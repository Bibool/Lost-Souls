////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CJournalPickup.h"
#include "engine.h"

// Static event for journal pickup collection. 
FAttemptToCollectJournalPickupDelegate::FAttemptToCollectJournalPickupSignature FAttemptToCollectJournalPickupDelegate::FJournalPickup;
////////////////////////////////////////////////////////////////////////////////////////////////////////////
ACJournalPickup::ACJournalPickup ()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickupType = EPickupType::JournalEntry;

	AutoPickupAtStart = false;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACJournalPickup::BeginPlay ()
{
	Super::BeginPlay ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ACJournalPickup::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  ACJournalPickup::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	// Check this is the player picking up the item and not an enemy or projectile for example.
	AActor* pPlayer = UGameplayStatics::GetPlayerPawn ( this, 0 );
	if (OtherActor == pPlayer)
	{

		UE_LOG ( LogTemp, Warning, TEXT ( "JOURNAL (ON OVERLAP) COLLECTED..." ) );
		// Broadcast to any listeners that an attempt to collect a pickup is occuring.
		FAttemptToCollectJournalPickupDelegate::FJournalPickup.Broadcast ( this );
	}
}
