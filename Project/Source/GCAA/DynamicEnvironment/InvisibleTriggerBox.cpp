////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "InvisibleTriggerBox.h"

AInvisibleTriggerBox::AInvisibleTriggerBox ()
{
	Box->OnComponentBeginOverlap.AddDynamic ( this, &AInvisibleTriggerBox::OnOverlapBegin );
	Box->OnComponentEndOverlap.AddDynamic ( this, &AInvisibleTriggerBox::OnOverlapEnd );
	bOneShotLatch = false;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  AInvisibleTriggerBox::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  AInvisibleTriggerBox::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		switch (OperatingMode)
		{
			case OneShot:
			{
				if (!bOneShotLatch)
				{
					InteractWithAllConnectedEnvironmentItems ();
				}

				// Latch this flag to True so only ever interact once.
				bOneShotLatch = true;

				break;
			}
			case EntryAndExit:
			{
				InteractWithAllConnectedEnvironmentItems ();
				break;
			}
			case EntryOnly:
			{
				InteractWithAllConnectedEnvironmentItems ();
				break;
			}
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  AInvisibleTriggerBox::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex )
{
	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		switch (OperatingMode)
		{
			case OneShot:
			{
				break;
			}
			case EntryAndExit:
			{
				InteractWithAllConnectedEnvironmentItems ();
				break;
			}
			case EntryOnly:
			{
				break;
			}
		}
	}
}


