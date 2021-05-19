///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"

#include "GCAA/SpellManager/Spells/Spell.h"
#include "GCAA/Structures/FCChainLightningStatsStruct.h"

#include "CChainLightning.generated.h"


UCLASS()
class GCAA_API ACChainLightning : public ASpell
{
	GENERATED_BODY()

public:
	ACChainLightning();

	void SetStats( FCChainLightningStatsStruct spellStats );
	
private:
	// Virtual override functions
	virtual void FireLogic( float DeltaTime ) 							override;
	virtual void Initialize()									override;
	virtual void CollisionLogic( AActor* otherActor )						override;
	virtual void CollisionEndLogic(AActor* otherActor)						override;
	virtual void NonEnemyCollisionLogic( UPrimitiveComponent* OtherComp, const FHitResult& Hit )	override;
	virtual void AdditionalAwakeLogic()								override;

	// Member functions

	// This reads iActorTracker and sets the enum accordingly.
	void CheckNumOfTargets();

	// Sorts an array by distance between this actor and the content of the array.
	void SortTArrayByDistance( TArray<AActor*> ValidActorTargets ) const;

	// Checks how many time it has bounced, then increments in.
	bool CheckBounce();

	void TargetAcquire(AActor* otherActor);

	void ShuffleArray(TArray<AActor*> array) const;
	// Very simple enum to help logic flow with a switch statement.
	enum class ForkNum
	{
		OneTarget		= 0,
		TwoTargets		= 1,
		ThreePlusTargets	= 2
	};
	
	// Member Variables
	FCChainLightningStatsStruct		sStats;							 // The struct that holds all the stats for this spell.
	bool					bCanCollide;					 // Boolean that stops collision from triggering more than once per frame.
	ForkNum					eCurrentFork;					 // Enum to help us track how many targets the spell can go to and thus logic flow.
	int					iActorTracker;					 // Increments each time a valid target is found, used with the enum above.
	int					iCollisionCount;				 // Keeps track of how many times the spell has collided. Used to stop spell from only ever choosing the target it just left.
	int					iCurrentBounces;				 // Keeps track of how many times the spell has bounced.
	float					fTargetSeekRadius;				 // The radius of the sphere trace to check for targets, gets smaller every bounce
	bool					bHasPreviouslyCollided;			 // Used to know if the spell can execute multiple damage instance to a single target or not.
	static const bool			kbDebugInfo = true;
	bool					bFirstDamageInstance;
	
	UPROPERTY()													 
	AActor*					pcActorTargetToRemember;		 // The struct that holds all the stats for this spell.

	UPROPERTY()
	AActor*					mpcActorTarget;
};
