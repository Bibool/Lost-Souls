// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHealthUI.generated.h"


class ACPlayer;
class UProgressBar;

/**
 * 
 */
UCLASS()
class GCAA_API UBaseHealthUI : public UUserWidget
{
	GENERATED_BODY()


public:
	/**
	 * Updates the health bar, comes with 2 variation.
	 * One will take a normalized or a single value.
	 * The overloaded will take two values and divide them by one another.
	 * 
	 * Used like: UpdateHealthBar ( fNormalizedHealth );
	 * @param fNormalizedValue Value that is calculated to be in a 0-1 range.
	 */
	void UpdateHealthBar( float fNormalizedValue  )const;

	/**
	* Updates the health bar, if given two values, will divide them by one another.
	* 
	* Used like: UpdateHealthBar( fCurrentHealth, fMaxHealth );
	* @param fCurrentValue value that will be divided against the next value.
	* @param fTopValue value that will be used to divide.
	*/
	void UpdateHealthBar( float fCurrentValue, float fTopValue )const;
	
	void SetOwner ( AActor* pOwner		);
	void SetPlayer( ACPlayer* pPlayer	);

protected:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UProgressBar*	m_pcHealthBar;

	UPROPERTY()
	AActor*			m_pcOwner;

	UPROPERTY()
	ACPlayer*		m_pcPlayer;
	
};
