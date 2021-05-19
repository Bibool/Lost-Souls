////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "MovingPlatform.h"
#include "Sound/SoundBase.h"

AMovingPlatform::AMovingPlatform ()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MovementDistance = 100.0f;
    atStart = true;
    RotationAmount = 0.0f;
    VerticalMovement = false;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay ()
{
    Super::BeginPlay ();
    /*Check curve from BP is valid */
    if (CurveFloat)
    {
        FOnTimelineFloat MovementProgressFunction;
        MovementProgressFunction.BindUFunction ( this, FName ( "HandleMovementProgress" ) );
        cMyTimeline.AddInterpFloat ( CurveFloat, MovementProgressFunction);
    }

    if (CurveFloatYaw)
    {
        FOnTimelineFloat RotationProgressFunction;
        RotationProgressFunction.BindUFunction ( this, FName ( "HandleRotationProgress" ) );
        cMyTimeline.AddInterpFloat ( CurveFloatYaw, RotationProgressFunction );
    }

    cMyTimeline.SetLooping ( false );

}

//////////////////////////////////////////////////////////////////////////
// Interface operation - must be implemented by this class. 
// Defines what happens to the Moving Platform during an interaction.
//////////////////////////////////////////////////////////////////////////
void AMovingPlatform::PerformInteract_Implementation ()
{
    PerformOneMovementAction ();

    
}


void  AMovingPlatform::PerformOneMovementAction () 
{
    if (!cMyTimeline.IsPlaying ())
    {
        if (atStart)
        {
            // Set up start and target values from supplied properties.



            FVector Direction;
            if (VerticalMovement)
            {
                Direction = FVector::UpVector;
            }
            else
            {
                const FRotator Rotation = GetActorRotation ();
                FRotator YawRotation = FRotator ( 0.0f, Rotation.Yaw, 0.0f );
                Direction = FRotationMatrix ( YawRotation ).GetUnitAxis ( EAxis::X );
            }



            UE_LOG ( LogTemp, Warning, TEXT ( ">>>>>>>>>>>>>>>>>>>>>>>>>>>>> o0oooooooooooooooooooooooo AT START" ) );

            cStartLocation = cTargetLocation = GetActorLocation ();
            cTargetLocation += Direction * (MovementDistance);
            
            fStartRotation = fTargetRotation = GetActorRotation ().Yaw;
            fTargetRotation += RotationAmount;
        }
        else
        {

            UE_LOG ( LogTemp, Warning, TEXT ( ">>>>>>>>>>>>>>>>>>>>>>>>>>>>> o0oooooooooooooooooooooooo AT END" ) );


            // Swap over start and target locations 
            FVector FTemporary = cStartLocation;
            cStartLocation = cTargetLocation;
            cTargetLocation = FTemporary;

            // Swap over start and target rotations
            float fTemporaryRotation = fStartRotation;
            fStartRotation = fTargetRotation;
            fTargetRotation = fTemporaryRotation;
        }

        cMyTimeline.PlayFromStart ();
        atStart = !atStart;

        // Play Moving Platform Sound
        PlayMovingPlatformSound();
    }

}


//////////////////////////////////////////////////////////////////////////
// Operation specified by the timeline for Curve Rotation.
//////////////////////////////////////////////////////////////////////////
void  AMovingPlatform::HandleRotationProgress ( float Value )
{
    FRotator cRotation;
    cRotation = GetActorRotation ();
    float fNewYaw = FMath::Lerp ( fStartRotation, fTargetRotation, Value );
    cRotation.Yaw = fNewYaw;
    SetActorRotation ( cRotation );
}

//////////////////////////////////////////////////////////////////////////
// Operation specified by the timeline for Curve movement.
//////////////////////////////////////////////////////////////////////////
void  AMovingPlatform::HandleMovementProgress ( float Value )
{
    //Setting up the new location of our actor
    FVector cNewLocation = FMath::Lerp ( cStartLocation, cTargetLocation, Value );
    SetActorLocation ( cNewLocation );

}




void AMovingPlatform::Tick ( float DeltaTime )
{
    Super::Tick ( DeltaTime );
    
}

void AMovingPlatform::PlayMovingPlatformSound()
{
    UGameplayStatics::SpawnSoundAtLocation(this, MovingPlatformSound, GetActorLocation());
}


