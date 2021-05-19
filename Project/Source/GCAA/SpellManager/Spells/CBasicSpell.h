///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Spell.h"
#include "GCAA/Structures/FCBasicSpellStatsStruct.h"

#include "CBasicSpell.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API ACBasicSpell : public ASpell
{
	GENERATED_BODY()


public:
	void SetStats( FCBasicSpellStatsStruct spellStats );	
	
private:
	virtual void Awake()																		override;
	virtual void FireLogic( float DeltaTime ) 													override;
	virtual void Initialize()																	override;
	virtual void CollisionLogic( AActor* otherActor )											override;
	virtual void NonEnemyCollisionLogic(UPrimitiveComponent* OtherComp, const FHitResult& Hit)	override;

	void Destroy_Wrapper();

	FCBasicSpellStatsStruct	m_sStats;
};
