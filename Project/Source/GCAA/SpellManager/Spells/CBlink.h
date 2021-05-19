///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"
#include "GCAA/Structures/FBlinkStatsStruct.h"

#include "CBlink.generated.h"

class ACPlayer;
class ASpellManager;


UCLASS()
class GCAA_API ACBlink : public AActor, public IPoolStatusIdentifier
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACBlink();

	// Called every frame
	virtual void Tick( float DeltaTime ) override;

	// What fires off the logic *request*
	void Blink();
	

	// Setters
	void SetSpellManager( ASpellManager* pSpellManager );
	void SetPlayer( ACPlayer* pPlayer );
	void SetStats( FBlinkStatsStruct sStats );


	// Getters
	FBlinkStatsStruct	GetStats()			const;
	FTimerHandle		GetAbilityTimer()	const;
	FTimerHandle		GetRechargeTimer()	const;
	int					GetCurrentCharges() const;
	
private:
	//////////////////////////////////////////////////////////
	//				Deprecated Variables					//
	enum class TeleportType									//
	{														//
		Distance = 0,										//
		Target = 1											//
	};														//
	FBlinkStatsStruct	m_sSpellStats;						//
	FVector				m_vHitLocation;						//
	FVector				m_vDepthLocation;					//
	FVector				m_v3FinalLocation;					//
	FVector				m_v3TeleportLocation;				//
	FVector				m_v3ProjectedLocation;				//
	bool				m_bHit;								//
	TeleportType		m_eTeleportType;					//
	//////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////
	//					Deprecated Functions				//
	//		 Previous tries at making a blink system.		//
	void LineTrace();										//
	void Teleport();										//
	bool TraceToTeleportTarget_Camera();					//
	bool TraceToTeleportTarget_Player();					//
	bool TeleportToLocation();								//
	void TeleportToLocation_Camera( FVector v3Location );	//
	void TeleportToLocation_Player( FVector v3Location );	//
	void GetPlayer();										//
	virtual void VFireEvent() override;						//
	//////////////////////////////////////////////////////////

	const bool			m_kbDebugInfo = false;

	// Member variables used by logic
	/* reference to the manager.*/
	UPROPERTY()
	ASpellManager* mpcSpellManager;

	/* reference to the player. */
	UPROPERTY()
	ACPlayer* mpcPlayer;

	FTimeline			m_sTimelineForward;
	FTimeline			m_sTimelineReverse;
	FTimerHandle		m_sTimer;
	FTimerHandle		m_sCounterRecharge;
	int					m_iBlinkCharges;
	bool				m_bCouldBlink;

	virtual void BeginPlay() override;

	/* Zoom FoV In */
	UFUNCTION()
	void ZoomIn( float Value ) const;

	/* Zoom FoV Out */
	UFUNCTION()
	void ZoomOut( float Value ) const;

	void PlayFromReverse();
	void DelayedAction();
	void ChargeLogic();
	void AddOneCharge();
	void AddExtraCharge();
	void BlinkFail();

	// Simple Struct to return 3 types in 1, used for the CanScaleWall();
	struct SBlinkData
	{
		FVector v3ImpactNormal;
		FVector v3ImpactLocation;
		bool	bBlockingHit;
	};

	// Simple Struct to take in 3 types in 1, used to check if ledge is possible to be teleported to
	struct SLedgeData
	{
		FVector v3TraceStart;
		FVector v3TraceEnd;
		float	fScaleHeight;
	};

	// The first trace, this traces for a teleport target, if nothing hit, it uses the distance of the linetrace. It returns trace hit data.
	SBlinkData	TraceBlinkTarget();

	// This calls TraceBlinkTarget() and uses its values to do an additional trace to see if it can step up a ledge.
	void		CanScaleWall();
	// Checks to see if the hit is within reach of the ledge, and returns whether true or false.
	bool		IsLedgeInReach( SLedgeData sLedgeData );
	// Will try to teleport player to locations, will return true or false which will decide if any charge/CD is used.
	bool		AttemptTeleport();
	// Called when prior function was successful, plays the blink effect and start the recursive recharge loop.
	void		BlinkExtraLogic();
	// Set when we can scale a well, will be used to decide which vector to teleport the player to.
	bool		m_bCanScaleWall;
	// Holds the distance/hit object location.
	FVector		m_v3BlinkLocation;
	// Holds the upward location of the ledge.
	FVector		m_v3WallBlinkLocation;	
};
