// Fill out your copyright notice in the Description page of Project Settings.


#include "MantleNpc.h"
#include "AIBullet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "PyroxenesExplosion.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

AMantleNpc::AMantleNpc()
{
	m_numberOfShots = 5;
	

	bCanDodge = true;
	fDodgeDistance = 600000.f;
	fDodgeCooldown = 1.0f;
	fDodgeStop = 0.1f;
	traceDistance = 2000.0f;
	hitObject = false;
	canCharge = false;

	ChargeDestination = GetActorLocation() + GetActorForwardVector() + 200.0f;

	ChargeCollision = CreateDefaultSubobject <UBoxComponent>(TEXT("BoxComponent"));;
	if (ChargeCollision)
	{
		FVector const range(6.0f);
		ChargeCollision->SetBoxExtent(range, false);
		ChargeCollision->SetCollisionProfileName("Trigger");
	}

	ChargeCollision->OnComponentBeginOverlap.AddDynamic(this, &AMantleNpc::OnOverLapBegin);
	ChargeCollision->OnComponentEndOverlap.AddDynamic(this, &AMantleNpc::OnOverLapEnd);
	
	ShieldCollider = CreateDefaultSubobject < UBoxComponent>(TEXT("Shield"));;
	//ShieldCollider->SetCollisionProfileName("BlockAllDynamic");
	
}

void AMantleNpc::BeginPlay()
{
	AMovingNpc::BeginPlay();
	//sets the rules for the melee collision box so it is always attatched to a certain socket 
	if (ChargeCollision)
	{
		FAttachmentTransformRules const rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
		ChargeCollision->AttachToComponent(GetMesh(), rules, "hand_rSocket");
		ChargeCollision->SetRelativeLocation(FVector(-8.0f, 0.0f, 0.0f));
	}
	attackRangeDefault = attackRange;
	
}

void AMantleNpc::BaseAttack()
{
	if (DamageableComponent->Get_Health() >= 20)
	{
		if (canCharge == false)
		{
			shotGunAttack();
		}
		//GetWorldTimerManager().SetTimer(AttackTimer, this, &AMantleNpc::TimerFunction, 3.0f, false);


		if (canCharge)
		{
			meleeCollision->SetCollisionProfileName("EnemyMelee");
			meleeCollision->SetNotifyRigidBodyCollision(true);

		}
	}
	if (DamageableComponent->Get_Health()<20)
	{
		explosionAttack();
	}
	//chargeAttack();
}

void AMantleNpc::playChargeSound()
{
	if (ChargeSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ChargeSound, GetActorLocation());

	}
}

void AMantleNpc::explosionAttack()
{
	if (Explosion)
	{
		FTransform SpawnTransform = GetActorTransform();
		SpawnTransform.TransformPosition(FVector(0.0f, 0.0f, 0.0f));

		SpawnTransform.SetLocation(GetActorForwardVector() + GetActorLocation());

		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator;

		GetWorld()->SpawnActor <APyroxenesExplosion>(Explosion, SpawnTransform, SpawnParams);
		ABaseNpc::BaseAttack();
		AMovingNpc::VOnDeath();
	}
}


void AMantleNpc::TimerFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, TEXT("STOPPPP drop"));
	meleeCollision->SetCollisionProfileName("NoCollision");
	meleeCollision->SetNotifyRigidBodyCollision(false);
}

void AMantleNpc::StopActions()
{
	isActive = false;
	attackRange = 0.0f;
	GetCharacterMovement()->MaxWalkSpeed = 0.0f;
}

void AMantleNpc::AllowActions()
{
	isActive = true;
	attackRange = attackRangeDefault;
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
}



void AMantleNpc::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	hitObject = true;
	//StopActions();
	//GetCharacterMovement()->StopMovementImmediately();
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, TEXT("hould drop"));

};

void AMantleNpc::OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//AllowActions();
};



void AMantleNpc::chargeAttack()
{
	lineTrace();
}

void AMantleNpc::lineTrace()
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	GetController()->GetActorEyesViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * traceDistance);

	FCollisionQueryParams TraceParams;

	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;

	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

	DrawDebugLine(GetWorld(), Start, End, FColor::Emerald, false, 2.0f);

	if (bHit)
	{
		hitObject = true;
		ChargeDestination = Hit.ImpactPoint;
		DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(5, 5, 5), FColor::Black, false, 2.0f);
	}

	else if (!bHit)
	{
		ChargeDestination = End;
	}
}

FVector AMantleNpc::getChargeDistance()
{
	return ChargeDestination;
}

bool AMantleNpc::getHitObject()
{
	return hitObject;
}

void AMantleNpc::setHitObject(bool i)
{
	hitObject = i;
}

bool AMantleNpc::getCanCharge()
{
	return canCharge;
}

void AMantleNpc::setCanCharge(bool i)
{
	canCharge = i;
}

void AMantleNpc::stopCharge()
{

	if (bCanDodge) // If the Player can dodge
	{
		//isActive = false;
		GetCharacterMovement()->BrakingFrictionFactor = 0.0f; // Set BrakingFriction to 0, as we don't want the Player to slow down once they touch ground again
		// Launches the Player in whichever X or Y axis the Player is facing using DodgeDistance, Both Overrides set to True as we want to replace all velocities
		LaunchCharacter(FVector(GetActorForwardVector().X, GetActorForwardVector().Y, 0).GetSafeNormal() * fDodgeDistance, true, true);
		bCanDodge = false; // Set to False as we don't want the Player to be able to dodge before the fDodgeCooldown runs out
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMantleNpc::stopCharge, fDodgeStop, false);
	}
	
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->BrakingFrictionFactor = 1.0f;
	// Here we call ResetDodge function then fDodgeCooldown that makes it so the Player can't use dodge again for an amount of time
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMantleNpc::ResetDodge, fDodgeCooldown, false);
}




void AMantleNpc::ResetDodge()
{
	isActive = true;
	bCanDodge = true; // Player can use Dodge again once fDodgeCooldown is depleted
}

void AMantleNpc::jumpAttack()
{
	
}

void AMantleNpc::AttackStart()
{
	ABaseNpc::AttackStart();
	
}

void AMantleNpc::AttackEnd()
{
	ABaseNpc::AttackEnd();
	AllowActions();
}



void AMantleNpc::shotGunAttack()
{
	if (BulletBP)
	{
		if (ShootSound)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ShootSound, GetActorLocation());

		}
		FVector spacebetween = GetActorRightVector() - 500.0f;
		FVector viewDirection = GetActorRotation().Vector();
	
		for (int i = 0; i < m_numberOfShots; i++)
		{
			FTransform SpawnTransform = GetActorTransform();
			SpawnTransform.TransformPosition(FVector(0.0f, 0.0f, 100.0f));
			viewDirection.Normalize();
			SpawnTransform.SetLocation(FVector
			(

				
				GetActorForwardVector().X * 10.0f + GetActorLocation().X + spacebetween.X,
				GetActorForwardVector().Y * 10.0f + GetActorLocation().Y + spacebetween.Y,
				GetActorForwardVector().Z * 10.0f + GetActorLocation().Z
			));

			FActorSpawnParameters SpawnParams;
			SpawnParams.Instigator;

			GetWorld()->SpawnActor <AAIBullet>(BulletBP, SpawnTransform, SpawnParams);

			spacebetween = spacebetween + 250.0f;
			ABaseNpc::BaseAttack();
			StopActions();
		}
	}
}


