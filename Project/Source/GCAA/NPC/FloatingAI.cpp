// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingAI.h"


// Sets default values for this component's properties
UFloatingAI::UFloatingAI()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UFloatingAI::BeginPlay()
{
	Super::BeginPlay();
	vstartLocation.Z = GetOwner()->GetActorLocation().Z; // Sets the start location to whatever the Actors location is
}


// Called every frame
void UFloatingAI::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// I'm using a sine wave to get the floating effect, so we will need to use time
	float time = GetOwner()->GetWorld()->GetRealTimeSeconds(); // This gets the lapse since the level loaded
	// Whatever time in seconds was since level loaded multiplied by fSpeedMultiplier. What this will equal to is a value between
	// -1 and +1 which I've used to drive the floating effect. This makes it so that no matter what, the Actor will keep floating
	float sine = FMath::Sin(time * fSpeedMultiplier);
	GetOwner()->SetActorLocation(FVector(GetOwner()->GetActorLocation().X, GetOwner()->GetActorLocation().Y, GetOwner()->GetActorLocation().Z +( vFloat.Z * sine)));
}