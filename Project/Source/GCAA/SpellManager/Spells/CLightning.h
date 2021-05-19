///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"
#include "GCAA/SpellManager/SpellManager.h"

#include "CLightning.generated.h"

UCLASS()
class GCAA_API ACLightning : public AActor, public IPoolStatusIdentifier
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACLightning();

	void FireLightning();

	void SetSpellManager		( ASpellManager*				pManager );
	void SetPlayer				( ACPlayer*						pPlayer	 );
	void SetStats				( FCChainLightningStatsStruct	sStats	 );
	bool GetCanBeUsed() const	{ return m_bCanBeUsed; }
	

private:
	// Called when this spell is spawned into the world.
	// Used to initial our types to check against in traces.
	virtual void BeginPlay() override;

	// Recursive function that finds targets around the main target.
	// It will do it's work then call itself again until all attempts exhausted.
	void FindSubTargets();
	// What calls the function, since we use a timer to fake a "travel" time.
	void DelayedRecursiveCall();
	// Resets any variables used in the process of seeking and applying damage.
	void ResetLogic();
	// Called when the spell has successfully completed and allows Manager to use it again.
	void SpellCompletion();
	// Currently not doing anything but will be used if no target hit with raytrace.
	void SpellFailure();
	// Randomly shuffles elements in array.
	void ShuffleArray(TArray<AActor*> array) const;
	// Sort array by distance based on given origin actor.
	static void OrderArray(AActor* pOrigin, TArray<AActor*> apToSort, TArray<AActor*>& apSorted);
	// Overrides interface function
	virtual void VFireEvent() override;

	// Used to keep track of the current amount of bounces.
	int		m_iCurrentCounter;
	// Used to keep track of the current Radius to query targets.
	float	m_fRadius;
	// Used by the spell manager to know if this spell is available to be used.
	bool	m_bCanBeUsed;
	
	
	UPROPERTY()
	ASpellManager*							m_pcSpellManager;
				
	UPROPERTY()			
	ACPlayer*								m_pcPlayer;
				
	UPROPERTY()			
	FCChainLightningStatsStruct 			m_sStats;
			
	UPROPERTY()			
	AActor*									m_pcPreviousTarget;
			
	UPROPERTY()			
	AActor*									m_pcCurrentTarget;
			
	UPROPERTY()			
	FTimerHandle							m_sTriggerTimer;

	UPROPERTY()
	TArray <TEnumAsByte<EObjectTypeQuery>>	m_sTypes;
	
};