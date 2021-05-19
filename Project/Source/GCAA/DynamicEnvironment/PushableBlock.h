////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Pushable Block
//
// Current Limitations:
//  - Pushing blocks moving in the -Z axis do not look realistic (too slow) - solution not implemented yet as 
//    not required in any game level for prototype.
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/BoxComponent.h"
#include "PushableBlock.generated.h"

UCLASS()
class GCAA_API APushableBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APushableBlock();

	UPROPERTY ( EditAnywhere )
	USceneComponent* ECRootComponent;

	UPROPERTY ( EditAnywhere )
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY ( EditAnywhere )
	UBoxComponent* TriggerBox;

	UPROPERTY ( EditAnywhere )
	UPhysicsConstraintComponent* PhyConstraint;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	float ImpulseMultiplier;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	float ReducedWalkSpeed;

	///////////////////////////////////////////////
	// Sound
	// Push Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* PushSound;
	void PlayPushBlockAudio();
	float fPreviousWorldTime;
	float fPushBlockTimeShiftDefault;
	float fPushBlockTimeShift;
	float fPushBlockTimer;
	////////////////////////////////////////////////
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION ()
		void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );
	
	UFUNCTION ()
		void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );

	void ExitPushAllowedActions ();

	bool FireTracesToLocatePushableBlockFlatSurface ( FVector& theSurfaceNormal, bool bDisplayDebug );

	// Stores the players default capsule radius which is enlarged during the pushing mechanic.
	float fCapRadius;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
