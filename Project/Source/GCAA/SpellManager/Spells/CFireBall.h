///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Spell.h"
#include "GCAA/Structures/FCFireBallStatsStruct.h"

#include "CFireBall.generated.h"

UCLASS()
class GCAA_API ACFireBall : public ASpell
{
	GENERATED_BODY()

public:
	ACFireBall();
	
	void SetStats( FCFireBallStatsStruct spellStats );	
private:
	// Virtual override functions
	virtual void FireLogic( float DeltaTime ) 													override;
	virtual void Initialize()																	override;
	virtual void CollisionLogic( AActor* otherActor )											override;
	virtual void NonEnemyCollisionLogic(UPrimitiveComponent* OtherComp, const FHitResult& Hit)	override;

	void TargetAcquiring(AActor* otherActor) const;
	void Explosion();

	FCFireBallStatsStruct	m_sStats;
};
