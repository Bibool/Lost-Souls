///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "SpellManager.h"

#include "GCAA/Enumerators/ESpellType.h"

#include "Spells/CBasicSpell.h"
#include "Spells/CBlink.h"
#include "Spells/CHeal.h"
#include "Spells/CFireBall.h"
#include "Spells/CWindblast.h"

#include "GCAA/UI/PlayerUI.h"
#include "Spells/CLightning.h"

// Sets default values
ASpellManager::ASpellManager()
{
 	// Manager does not tick, so we can turn that off.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ASpellManager::BeginPlay()
{
	Super::BeginPlay();
	
	PopulateSpells();
}

void ASpellManager::PopulateSpells()
{
	// Spells that should be pooled should be created in the loop.
	// First it spawns it in the world, then sets all the values on that spell.
	// Finally gets added to the spell pool array.
	
	const FVector kv3OutOfSightLocation = FVector(-9999, -9999, -9999);
	
	for (int index = 0; index < m_kfMaxAmountInPool; ++index)
	{
		if (FireBallBP)
		{
			ACFireBall* pcFireBall = GetWorld()->SpawnActor<ACFireBall>( FireBallBP, kv3OutOfSightLocation, FRotator::ZeroRotator );
			pcFireBall->SetManager		( this			);
			pcFireBall->SetCPlayer		( m_pcPlayer	);
			pcFireBall->SetStats		( FireBallStats );
			m_apcSpellPool.Add			( pcFireBall 	);
			m_apcSpellsAsActors.Add		( pcFireBall 	);
		}
		if (ChainLightningBP)
		{
			ACLightning* pcLightning = GetWorld()->SpawnActor<ACLightning>( ChainLightningBP, kv3OutOfSightLocation, FRotator::ZeroRotator );

			pcLightning->SetSpellManager( this			);
			pcLightning->SetPlayer		( m_pcPlayer	);
			pcLightning->SetStats		( ChainLightningStats );
			m_apcSpellPool.Add			( pcLightning	);
			m_apcSpellsAsActors.Add		( pcLightning 	);
		}
		if (BasicSpellBP)
		{
			ACBasicSpell* pcBasicSpell = GetWorld()->SpawnActor<ACBasicSpell>( BasicSpellBP, kv3OutOfSightLocation, FRotator::ZeroRotator );

			pcBasicSpell->SetManager	( this			);
			pcBasicSpell->SetCPlayer	( m_pcPlayer	);
			pcBasicSpell->SetStats		( BasicSpellStats );
			m_apcSpellPool.Add			( pcBasicSpell	);
			m_apcSpellsAsActors.Add		( pcBasicSpell 	);
		}
		if ( WindBlastBP )
		{
			ACWindblast* pcWindblast = GetWorld()->SpawnActor<ACWindblast>( WindBlastBP, kv3OutOfSightLocation, FRotator::ZeroRotator );
			
			pcWindblast->SetSpellManager( this			);
			pcWindblast->SetPlayer		( m_pcPlayer	);
			pcWindblast->SetStats		( WindBlastStats);			
			m_apcSpellPool.Add			( pcWindblast	);
			m_apcSpellsAsActors.Add		( pcWindblast 	);
		}		
	}

	// Spells that do not make use of the spell pool.
	if ( BlinkBP )
	{
		m_pcBlink = GetWorld()->SpawnActor<ACBlink>( BlinkBP, kv3OutOfSightLocation, FRotator::ZeroRotator );
		
		m_pcBlink->SetSpellManager		( this			);
		m_pcBlink->SetPlayer			( m_pcPlayer	);
		m_pcBlink->SetStats				( BlinkStats	);		
		m_apcSpellPool.Add				( m_pcBlink		);
		m_apcSpellsAsActors.Add			( m_pcBlink 	);
	}
	if ( HealBP )
	{
		m_pcHeal = GetWorld()->SpawnActor<ACHeal>( HealBP, kv3OutOfSightLocation, FRotator::ZeroRotator);
		
		m_pcHeal->SetSpellManager		( this			);
		m_pcHeal->SetPlayer				( m_pcPlayer	);
		m_pcHeal->SetStats				( HealStats		);		
		m_apcSpellPool.Add				( m_pcHeal		);
		m_apcSpellsAsActors.Add			( m_pcHeal 		);
	}
}

void ASpellManager::RequestUIResourcesUpdate( UPlayerUI* pCurrentUI ) const
{
	if (FireBallStats.Skill_Icon)
	{
		pCurrentUI->SetSkillIcons(UPlayerUI::ESkill::FireBall, FireBallStats.Skill_Icon );
	}
	if (ChainLightningStats.Skill_Icon)
	{
		pCurrentUI->SetSkillIcons(UPlayerUI::ESkill::Lightning, ChainLightningStats.Skill_Icon );
	}
	if (BlinkStats.Skill_Icon)
	{
		pCurrentUI->SetSkillIcons(UPlayerUI::ESkill::Blink, BlinkStats.Skill_Icon );
	}
	if (HealStats.Skill_Icon)
	{
		pCurrentUI->SetSkillIcons(UPlayerUI::ESkill::Heal, HealStats.Skill_Icon );
	}
	
	if ( WindBlastStats.Skill_Icon )
	{
		pCurrentUI->SetSkillIcons(UPlayerUI::ESkill::Windblast, WindBlastStats.Skill_Icon );
	}
}

void ASpellManager::RequestSpell(ESpellType eSpell)
{
	GetFromPool( eSpell );
}

void ASpellManager::GetFromPool(ESpellType eType)
{
	bool bFoundSpell = false;
	
	for (auto spell : m_apcSpellPool)
	{
		switch (eType)
		{
		case ESpellType::Default:
			{
				if (spell && spell->GetCanPoolUse() && spell->GetSpellType() == ESpellType::Default )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		case ESpellType::Blink:
			{
				if (spell && spell->GetSpellType() == ESpellType::Blink )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		case ESpellType::Fireball:
			{
				if (spell && spell->GetCanPoolUse() && spell->GetSpellType() == ESpellType::Fireball )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		case ESpellType::Heal:
			{
				if (spell && spell->GetSpellType() == ESpellType::Heal )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		case ESpellType::Lightning:
			{
				if (spell && spell->GetCanPoolUse() && spell->GetSpellType() == ESpellType::Lightning )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		case ESpellType::WindBlast:
			{
				if (spell && spell->GetCanPoolUse() && spell->GetSpellType() == ESpellType::WindBlast )
				{
					spell->VFireEvent();
					bFoundSpell = true;
				}
				break;
			}
		default:
			break;
		}

		if ( bFoundSpell )
		{
			break;
		}
	}
}

// Getters
TArray<AActor*>& ASpellManager::GetCurrentSpellsArray() 
{
	return m_apcSpellsAsActors;
}

ACPlayer* ASpellManager::GetPlayer() const
{
	return m_pcPlayer;
}

int ASpellManager::GetBlinkCount() const
{
	return m_pcBlink->GetCurrentCharges();
}

float ASpellManager::GetBlinkRechargeTimer() const
{
	return GetWorldTimerManager().GetTimerRemaining(m_pcBlink->GetRechargeTimer());
}

void ASpellManager::RequestHealEnd() const
{
	m_pcHeal->HealEnd();
}

// Setters
void ASpellManager::SetPlayerReference(ACPlayer* ptrCPlayer)
{
	m_pcPlayer = ptrCPlayer;

	m_pcBlink->SetPlayer( ptrCPlayer );
}