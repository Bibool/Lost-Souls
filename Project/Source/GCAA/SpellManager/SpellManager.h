///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"

#include "GCAA/Structures/FBlinkStatsStruct.h"
#include "GCAA/Structures/FCBasicSpellStatsStruct.h"
#include "GCAA/Structures/FCChainLightningStatsStruct.h"
#include "GCAA/Structures/FCFireBallStatsStruct.h"
#include "GCAA/Structures/FHealStatsStruct.h"
#include "GCAA/Structures/FWindBlastStatsStruct.h"

#include "SpellManager.generated.h"

#pragma region Forward_Declaration

class 		ACPlayer;
class 		ACLightning;
class 		UPlayerUI;
class 		ACHeal;
class 		ACBasicSpell;
class 		ACBlink;
class 		ACChainLightning;
class 		ACFireBall;
class 		ACWindblast;

enum class	ESpellType;
struct		FSpellIdentifierStruct;

#pragma endregion 

UCLASS()
class GCAA_API ASpellManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpellManager();

	/* The blueprints that will spawn */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Fireball" )
	TSubclassOf<ACFireBall> FireBallBP;

	/* This holds all values that the ACFireBall will use.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Fireball" )
	FCFireBallStatsStruct  FireBallStats;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Chain Lightning" )
	TSubclassOf<ACLightning> ChainLightningBP;

	/* This holds all values that the ACFireBall will use.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Chain Lightning" )
	FCChainLightningStatsStruct  ChainLightningStats;

	/* The blueprint version of the class that will spawn. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Spells\| Basic Attack")
	TSubclassOf<ACBasicSpell> BasicSpellBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Spells\| Basic Attack")
	FCBasicSpellStatsStruct BasicSpellStats;

	/* The Blink blueprint that the manager will spawn. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Blink" )
	TSubclassOf<ACBlink> BlinkBP;

	/* This holds all values that the blink will use.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Blink" )
	FBlinkStatsStruct  BlinkStats;

	/* The Blink blueprint that the manager will spawn. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|WindBlast" )
	TSubclassOf<ACWindblast> WindBlastBP;

	/* This holds all values that the blink will use.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|WindBlast" )
	FWindBlastStatsStruct  WindBlastStats;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Heal" )
	TSubclassOf<ACHeal> HealBP;
	
	/* This holds all values that the heal will use.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Spells\|Heal" )
	FHealStatsStruct  HealStats;	

	/** Requests a spell of given type.
	 * @param eType Type of the spell that is requested.
	 */
	void RequestSpell( ESpellType eType );

	/** Sets the image on the UI from the structs on the manager.
	 * @param pCurrentUI The PlayerUI to update them on.
	 */
	void RequestUIResourcesUpdate( UPlayerUI* pCurrentUI ) const;

	/** Called to end the healing effect. */
	void RequestHealEnd() const;
	
	/** Gets the current charges of Blink. */
	int GetBlinkCount() const;
	
	/** Gets the time left on blink, as float. */
	float GetBlinkRechargeTimer() const;
	
	/** Gets the current player. */
	ACPlayer* GetPlayer() const;
	
	/** Gets the current spells in the pool. */
	TArray<AActor*>&GetCurrentSpellsArray();

	/** Sets the pointer to the player. */
	void SetPlayerReference( ACPlayer* ptrCPlayer );
private:
	/** How many spells to have total in pool waiting to be used.
	 * It is the amount PER spells, not all spells.
	 * So that means it will have 20x Fireballs, 20x Windblast, ect.
	 */
	static const int m_kfMaxAmountInPool = 20;
	
	/** An array of interfaces (all spells inherit from it).
	 * This removes the need of casting to find each individual spells.
	 * Since the interface has the Fire as a public function,
	 * it will just call that which will calls it on the spell.
	 */
	TArray<IPoolStatusIdentifier*> m_apcSpellPool;

	/** A copy of the above as actors (used for spells to ignore). */
	UPROPERTY()
	TArray<AActor*> m_apcSpellsAsActors;
	
	/**  Pointer to the current blink spell. Used since we need some extra info from it. */
	UPROPERTY()
	ACBlink*		m_pcBlink;

	/**  Pointer to the current heal. Used as it has extra requirements. */
	UPROPERTY()
	ACHeal*			m_pcHeal;

	/** Pointer to the player character. */
	UPROPERTY()
	ACPlayer*		m_pcPlayer;

	/**  BeginPlay */
	virtual void BeginPlay() override;

	/** A function that cycles through the spell pool and finds one with all valid requirements.
	 * @param eType The type of the spell to find.
	 */
	void GetFromPool (ESpellType eType );

	/** Called in BeginPlay. Generates the spell pool and populates it with all spells.
	 * DO NOT CALL THIS FUNCTION MORE THAN ONCE.
	 */
	void PopulateSpells();
};
