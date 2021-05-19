// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GCAA/Enumerators/ESpellType.h"
#include "UObject/Interface.h"
#include "PoolStatusIdentifier.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UPoolStatusIdentifier : public UInterface
{
	GENERATED_BODY()
};

/**
 * This is a simple interface used by the object pool to find a spell that can be used.
 */
class GCAA_API IPoolStatusIdentifier
{
	GENERATED_BODY()

public:
	/** Returns the status of the spell. */
	FORCEINLINE bool GetCanPoolUse() const { return m_bCanBeUsed; }
	
	/* Pure virtual function used to call the fire event on spells to completely remove casting inside the object pool. **/
	FORCEINLINE virtual void VFireEvent() = 0;

	/** Get the Type of spell. */
	FORCEINLINE ESpellType GetSpellType() const { return m_eSpellType; }
private:
	bool		m_bCanBeUsed = true;
	ESpellType	m_eSpellType = ESpellType::Default;

protected:
	/** Sets the new status of the spell.
	 * @param bCanBeUsed can the spell be used by the pool?
	 */
	FORCEINLINE void SetCanPoolUse	( bool bCanBeUsed  ) { m_bCanBeUsed = bCanBeUsed;	}
	FORCEINLINE void SetSpellType	( ESpellType eType ) { m_eSpellType = eType;		}
};
