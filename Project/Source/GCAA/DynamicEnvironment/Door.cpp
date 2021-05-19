////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Door.h"
#include "Sound/SoundBase.h"

ADoor::ADoor ()
{
    PrimaryActorTick.bCanEverTick = true;
    IsOpen = false;
    DoorSize = 100.0f;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay ()
{
    Super::BeginPlay ();

    /*Check curve from BP is valid */
    if (CurveFloat)
    {
        FOnTimelineFloat MovementProgressFunction;
        MovementProgressFunction.BindUFunction ( this, FName ( "HandleMovementProgress" ) );

        //Setting up the loop status and the function that is going to fire when the timeline ticks
        cMyTimeline.AddInterpFloat ( CurveFloat, MovementProgressFunction );
        cMyTimeline.SetLooping ( false );
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Interface operation - must be implemented by this class.
// Defines what happens to the Door during an interaction.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ADoor::PerformInteract_Implementation ()
{
    // Ignore interation if door is currently opening or closing.
    if (!cMyTimeline.IsPlaying ())
    {
        if (IsOpen)
        {
            // Swap over start and target locations to close the door.
            FVector FTemporary = cStartLocation;
            cStartLocation = cTargetLocation;
            cTargetLocation = FTemporary;
        }
        else
        {
            // Set up start and target values from supplied properties.
            cStartLocation = cTargetLocation = GetActorLocation ();

            // Use the doors rotation to calcualte the direction the door moves when opened/closed.
            // (Applicable to horizontal moving doors only).
            const FRotator Rotation = GetActorRotation ();
            FRotator YawRotation = FRotator ( 0.0f, Rotation.Yaw, 0.0f );
            const FVector Direction = FRotationMatrix ( YawRotation ).GetUnitAxis ( EAxis::X );

            // Play Open Door Sound
            PlayOpenDoorSound();

            switch (DoorMovementDirection)
            {
            case Left:
            {

                // If the Yaw rotation of the actor is greater than 180.0  then flip left/right properties.

                if (Rotation.Yaw <= 180.0f)
                {
                    cTargetLocation = (cTargetLocation - (Direction * DoorSize));
                }
                else
                {
                    cTargetLocation = (cTargetLocation + (Direction * DoorSize));
                }

                break;
            }
            case Right:
            {

                // If the Yaw rotation of the actor is greater than 180.0  then flip left/right properties.

                if (Rotation.Yaw <= 180.0f)
                {
                    cTargetLocation = (cTargetLocation + (Direction * DoorSize));
                }
                else
                {
                    cTargetLocation = (cTargetLocation - (Direction * DoorSize));
                }

                break;
            }
            case Up:
            {
                cTargetLocation.Z += DoorSize;
                break;
            }
            default:
            {
                cTargetLocation.Z += DoorSize;
                break;
            }
            }

            //DrawDebugSphere ( GetWorld (), cStartLocation, 50.0f, 5.0f, FColor::Green, true );
            //DrawDebugSphere ( GetWorld (), cTargetLocation, 50.0f, 5.0f, FColor::Red, true );

        }
        cMyTimeline.PlayFromStart ();
        IsOpen = !IsOpen;
    }
}

//////////////////////////////////////////////////////////////////////////
// Operation specified by the timeline for Curve movement.
//////////////////////////////////////////////////////////////////////////
void  ADoor::HandleMovementProgress ( float Value )
{
    //Setting up the new location of our actor
    FVector NewLocation = FMath::Lerp ( cStartLocation, cTargetLocation, Value );
    SetActorLocation ( NewLocation );
}

void ADoor::PlayOpenDoorSound()
{
    UGameplayStatics::SpawnSoundAtLocation(this, OpenDoorSound, GetActorLocation());
}