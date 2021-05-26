//////////////////////////////////
//		Brandon Middleton		//
//			MantleNpc			//
//////////////////////////////////

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

//Consturctor function
AMantleNpc::AMantleNpc()
{
	
	m_numberOfShots = 5; //Default value for how many bullets the npc should shoot
	
	hitObject = false; 	 //Default values for the boolean which was used int he line trace function
	canCharge = false;	 //Default values for the boolean to say if the npc can charge or not

	minHealthForExplosion = 20.0f; //The amount of health needed to do the explosion attack
	
	ChargeDestination = GetActorLocation() + GetActorForwardVector() + 200.0f; //how far the npc should charge

	//Collision defaults 
	ChargeCollision = CreateDefaultSubobject <UBoxComponent>(TEXT("BoxComponent"));;
	if (ChargeCollision)
	{
		FVector const range(6.0f);
		ChargeCollision->SetBoxExtent(range, false);
		ChargeCollision->SetCollisionProfileName("Trigger");
	}

	//Sets up the overlap functions 
	ChargeCollision->OnComponentBeginOverlap.AddDynamic(this, &AMantleNpc::OnOverLapBegin);
	ChargeCollision->OnComponentEndOverlap.AddDynamic(this, &AMantleNpc::OnOverLapEnd);

	//Not being used but was used for setting up the shield collision
	ShieldCollider = CreateDefaultSubobject < UBoxComponent>(TEXT("Shield"));;
	//ShieldCollider->SetCollisionProfileName("BlockAllDynamic");
	
}

//Begin play function 
void AMantleNpc::BeginPlay()
{
	AMovingNpc::BeginPlay();
	//Sets the rules for the melee collision box so it is always attached  to a certain socket 
	if (ChargeCollision)
	{
		FAttachmentTransformRules const rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
		ChargeCollision->AttachToComponent(GetMesh(), rules, "hand_rSocket");
		ChargeCollision->SetRelativeLocation(FVector(-8.0f, 0.0f, 0.0f));
	}
	attackRangeDefault = attackRange;
	
}

//Base Attack Function which changes functionality depending on a few factors
void AMantleNpc::BaseAttack()
{
	//If the npcs health is above the minimum health the mantle npc will use a shotgun attack 
	if (DamageableComponent->Get_Health() >= minHealthForExplosion)
	{
		if (canCharge == false)
		{
			shotGunAttack();
		}
		//GetWorldTimerManager().SetTimer(AttackTimer, this, &AMantleNpc::DisableCollisionTimer, 3.0f, false);

		//Enables and disables collision depending on if the mantle can charge or not
		if (canCharge)
		{
			meleeCollision->SetCollisionProfileName("EnemyMelee");
			meleeCollision->SetNotifyRigidBodyCollision(true);
		}
	}
	
	//If the enemy is less than the minimum health he will use the explosion attack instead 
	if (DamageableComponent->Get_Health() < minHealthForExplosion)
	{
		explosionAttack();
	}
}

//Plays a sound effect which is called inside a behaviour tree task 
void AMantleNpc::playChargeSound()
{
	if (ChargeSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ChargeSound, GetActorLocation());

	}
}

//The explosion attack taken from the pyro npc and refactored 
void AMantleNpc::explosionAttack()
{
	if (Explosion)
	{
		FTransform SpawnTransform = GetActorTransform();
		SpawnTransform.TransformPosition(FVector(0.0f, 0.0f, 0.0f));

		SpawnTransform.SetLocation(GetActorForwardVector() + GetActorLocation());

		FActorSpawnParameters SpawnParams;
		//SpawnParams.Instigator;

		GetWorld()->SpawnActor <APyroxenesExplosion>(Explosion, SpawnTransform, SpawnParams);
		ABaseNpc::BaseAttack();
		AMovingNpc::VOnDeath();
	}
}

//This function was called on a timer to help disable the collision after the npc has charged
void AMantleNpc::DisableCollisionTimer()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, TEXT("CollisionStopped"));
	meleeCollision->SetCollisionProfileName("NoCollision");
	meleeCollision->SetNotifyRigidBodyCollision(false);
}

//This function stops all actions of the npc
void AMantleNpc::StopActions()
{
	isActive = false;
	attackRange = 0.0f;
	GetCharacterMovement()->MaxWalkSpeed = 0.0f;
}

//Function which allows all actions of the npc
void AMantleNpc::AllowActions()
{
	isActive = true;
	attackRange = attackRangeDefault;
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
}


//colision functions which are no longer being used 
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


//The charge attack function which was going to use the line trace function with some other functionality but has now been cut
void AMantleNpc::chargeAttack()
{
	lineTrace();
}

//Line trace function  which would have been used to draw a line trace when the npc was charging to help detect where it should go and if it has hit anything 
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

//This returns the charge distance (this was used inside a behaviour tree task 
FVector AMantleNpc::getChargeDistance()
{
	return ChargeDestination;
}

//Worked with the line trace to help return a value which was then sent to a behaviour tree task 
bool AMantleNpc::getHitObject()
{
	return hitObject;
}

//Setter for the hit object boolean
void AMantleNpc::setHitObject(bool i)
{
	hitObject = i;
}

//Gets the boolean to say if the npc can charge or not
bool AMantleNpc::getCanCharge()
{
	return canCharge;
}

//Sets the boolean to say if the npc can charge or not
void AMantleNpc::setCanCharge(bool i)
{
	canCharge = i;
}


//Says when a attack started in the future I would have liked to add extra functionality 
void AMantleNpc::AttackStart()
{
	ABaseNpc::AttackStart();
}

//Says when an attack has ended
void AMantleNpc::AttackEnd()
{
	ABaseNpc::AttackEnd();
	AllowActions();
}


//ShotGun attack function
void AMantleNpc::shotGunAttack()
{
	if (BulletBP) //Checks to make sure the bullet actor is set inside the blueprint
	{
		if (ShootSound) //Checks for a sound and if there is one it plays a sound
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ShootSound, GetActorLocation());

		}
		FVector spacebetween = GetActorRightVector() - 500.0f; //sets the starting origin for the bullet so it spawns to the side of the npc
		FVector viewDirection = GetActorRotation().Vector(); // gets which way the npc is facing
	
		for (int i = 0; i < m_numberOfShots; i++) //Gets the amount of bullets and goes through a for loop adjusting the spawn position each time 
		{
			FTransform SpawnTransform = GetActorTransform();
			SpawnTransform.TransformPosition(FVector(0.0f, 0.0f, 100.0f));
			viewDirection.Normalize();
			SpawnTransform.SetLocation(FVector
			(

				
				GetActorForwardVector().X * 10.0f + GetActorLocation().X + spacebetween.X,
				GetActorForwardVector().Y * 10.0f + GetActorLocation().Y + spacebetween.Y,
				GetActorForwardVector().Z * 10.0f + GetActorLocation().Z
			)); //Sets where it should spawn 

			FActorSpawnParameters SpawnParams;
			//SpawnParams.Instigator;

			GetWorld()->SpawnActor <AAIBullet>(BulletBP, SpawnTransform, SpawnParams); //Spawns the bullet

			spacebetween = spacebetween + 250.0f; //Adds onto the space between so each bullet spawns in a new position
			ABaseNpc::BaseAttack(); //Calls the default base attack function which enables collision and plays a montage if there is one 
			StopActions(); //Stops the actions so the npc cannot move while shooting 
		}
	}
}


