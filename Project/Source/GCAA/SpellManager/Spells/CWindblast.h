///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"

#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"
#include "GCAA/Structures/FActorDistanceData.h"
#include "GCAA/Structures/FWindBlastStatsStruct.h"


#include "CWindblast.generated.h"

class ACPlayer;
class ASpellManager;


UCLASS()
class GCAA_API ACWindblast : public AActor, public IPoolStatusIdentifier
{
	GENERATED_BODY()

public:
	ACWindblast();

	// Fires off the spell logic. Called by the Spell manager when the player casts it.
	void FireWindblast();

	// Setters
	void SetSpellManager	( ASpellManager*			pSpellManager	);				// The spell manager.	_deprecated_ 
	void SetPlayer			( ACPlayer*					pPlayer			);				// The player.			_deprecated_ 
	void SetStats			( FWindBlastStatsStruct		sStats			);				// The stats of this spell.

	// Tick (Update) Override - Used exclusively for the timeline.
	virtual void Tick		( float						DeltaTime		) override;
	// BeginPlay Override - Currently unused.
	virtual void BeginPlay() override;
	
private:
	// Finds valid targets.
	void TraceForTargets();

	virtual void VFireEvent() override;
	
	////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////      NOW UNUSED      ////////////////////////////////////////
	// Displaces the targets.																	  //
	void DisplaceTargets();																		  //								
	// Called in the timeline, lerps the location (Displaces) the target actors.				  //
	UFUNCTION()																					  //
	void ApplyDisplacement(float Value);														  //
	// CB Function when the timeline has completed. Or when the lerp has reached desired offset.  //
	UFUNCTION()																					  //
	void TimelineComplete();																	  //
	////////////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION()
	void RestoreNPCState();

	// If the spell found no valid targets, refunds the cooldown.
	void ReportSpellFailure();

	//////////////////////////////////      VARIABLES       //////////////////////////////////////
	bool m_bCastFail;				            			// Used to know if cast failed.	
	bool m_bTargetsFound;									// Was any targets valid?		
	bool m_bDisplacing;										// Are the targets being moved?	
	UPROPERTY()			
	TArray<FActorDistanceData>	m_apsTargets;				// TArray of our target data.	
	UPROPERTY()			
	FWindBlastStatsStruct		m_sSpellStats;				// Member copy of our stats.	
	UPROPERTY()		
	FTimerHandle				m_sRestoreControl;			// Timer for restoring NPC state.

	
	UPROPERTY()
	ASpellManager*				m_pcSpellManager;			// Pointer to the manager.			_deprecated_    
	UPROPERTY()
	ACPlayer*					m_pcPlayer;					// Pointer to the player.			_deprecated_ 
	UPROPERTY()
	FTimeline					m_sMoveBackWardTimeline;	// Timeline used to displace.		_deprecated_ 
};
