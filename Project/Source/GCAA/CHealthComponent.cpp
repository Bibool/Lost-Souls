// Fill out your copyright notice in the Description page of Project Settings.


#include "CHealthComponent.h"

// Sets default values for this component's properties
UCHealthComponent::UCHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// Sensible initial value for the player
	fDefaultHealth = 100.0f;
	fHealth = fDefaultHealth;
}


// Called when the game starts
void UCHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UCHealthComponent::VTakeDamage);

	}
}

void UCHealthComponent::VTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0)
	{
		return;
	}

	fHealth = FMath::Clamp(fHealth - Damage, 0.0f, fDefaultHealth);
}




