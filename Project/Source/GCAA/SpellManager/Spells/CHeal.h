///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"
#include "GCAA/Structures/FHealStatsStruct.h"

#include "CHeal.generated.h"

class ACPlayer;
class ASpellManager;


UCLASS()
class GCAA_API ACHeal : public AActor, public IPoolStatusIdentifier
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACHeal();

	// Heal event.
	void Heal();

	// Heal stops.
	void HealEnd();
	
	void SetStats		 ( FHealStatsStruct	sStats		);
	void SetPlayer		 ( ACPlayer*		pcPlayer	);
	void SetSpellManager ( ASpellManager*	pcManager	);
	
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void VFireEvent() override;

	void Regen( float DeltaTime);
	
	UFUNCTION()
	void CB_Heal();

	FHealStatsStruct m_sSpellStats;

	// Pointer to the player
	UPROPERTY()
	ACPlayer*		m_pcPlayer;

	// Pointer to the spell manager
	UPROPERTY()
	ASpellManager*	m_pcManager;

	// The Timer for heal type - tick
	UPROPERTY()
	FTimerHandle	m_sHealTick;

	// Basic enum to accordingly switch behavior.
	enum class EHealType
	{
		Off		=-1,
		Regen	= 0,
		Tick	= 1
	};

	// Can it be casted?
	bool			m_bCanCast;

	// Do Once bool
	bool			m_bDoOnce;

	// The original speed of the player. Used to revert back to it.
	float			m_fOriginalSpeed;

	// Type of heal
	EHealType		m_eHealType;

	// The overhead amount to keep the lerp steady.
	const float	m_kfOverLap = 100.f;
};
