// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNpc.h"




#include "NavigationSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/WidgetComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "NPCHealthBar.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "NpcSpawner.h"
#include "GCAA/UI/Health/BaseHealthUI.h"



// Sets default values
ABaseNpc::ABaseNpc()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Creates the damage component.
	DamageableComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));
	
	//stats
	damageAmount = 20.0f;
	maxHealth = 100.0f;
	currentHealth = maxHealth;
	movingNpc = false;
	attackRange = 77.0f;
	
	isActive = true;
	isMeleeCollisionEnabled = false;

	isTargettingPlayer = false;
	
	//creates the box component for melee damage
	meleeCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MeleeCollisionBox"));
	if (meleeCollision)
	{
		FVector const range(6.0f);
		meleeCollision->SetBoxExtent(range, false);
		meleeCollision->SetCollisionProfileName("NoCollision");
	}

	//sets the widget component 
	widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("health"));
	if (widget)
	{
		widget->SetupAttachment(RootComponent);
		widget->SetWidgetSpace(EWidgetSpace::Screen);
		widget->SetRelativeLocation(FVector(0.0f, 0.0f, 130.0f));
	}

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));

	
}

// Called when the game starts or when spawned
void ABaseNpc::BeginPlay()
{
	Super::BeginPlay();

	attackRangeDefault = attackRange;
	//sets the material colour of the character to a random color. 
	UMaterialInstanceDynamic* const material_instance = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);
	if (material_instance)
	{
		material_instance->SetVectorParameterValue("BodyColor", FLinearColor::MakeRandomColor());
		GetMesh()->SetMaterial(0, material_instance);
	};
	
	//sets the rules for the melee collision box so it is always attatched to a certain socket 
	if (meleeCollision)
	{
		if (GetMesh()->SkeletalMesh)
		{
			if (GetMesh()->DoesSocketExist("hand_rSocket"))
			{
				FAttachmentTransformRules const rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				meleeCollision->AttachToComponent(GetMesh(), rules, "hand_rSocket");
				meleeCollision->SetRelativeLocation(FVector(-8.0f, 0.0f, 0.0f));
			}
		}
	}

	//attaches the collision to the delegates
	if(meleeCollision)
	{
		meleeCollision->OnComponentBeginOverlap.AddDynamic(this, &ABaseNpc::onAttackOverlapBegin);
		meleeCollision->OnComponentEndOverlap.AddDynamic(this, &ABaseNpc::onAttackOverlapEnd);
	}

	//OnTakeAnyDamage.AddDynamic(this, &ABaseNpc::TakeDamage);

	//sets the widget class
	if (widgetClass)
	{
		widget->SetWidgetClass(widgetClass);
	}

	if (widgetClass)
	{
		widget->SetWidgetClass(widgetClass);
		
		const auto pUI = Cast<UBaseHealthUI>(widget->GetUserWidgetObject());

		if (pUI)
		{
			DamageableComponent->SetUI( pUI );
			UE_LOG(LogTemp, Warning, TEXT("Was valid."))
		}		
	}

	if(!isActive)
	{
		StopActions();
	}
	
}

void ABaseNpc::setSpawner(ANpcSpawner* npcSpawnerClass)
{
	npcSpawner = npcSpawnerClass;
}

// Called every framefloat DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser
void ABaseNpc::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

float ABaseNpc::getCurrentHealth() const
{
	return DamageableComponent->Get_Health();
}

float ABaseNpc::getMaxHealth() const
{
	return maxHealth;
}

bool ABaseNpc::getMovingNpc()
{
	return movingNpc;
}

bool ABaseNpc::getIsActive()
{
	return isActive;
}

void ABaseNpc::setHealth(float const new_health)
{
	currentHealth = new_health;
}

bool ABaseNpc::getIsTargettingPlayer()
{
	return isTargettingPlayer;
}

void ABaseNpc::setIsTargettingPlayer(bool i)
{
	isTargettingPlayer = i;
}

float ABaseNpc::getAttackRange() const
{
	return attackRange;
}


void ABaseNpc::VOnDeath()

{
	//Sets the controller
	AController* CurrentController = GetController();

	//Sets the amount of enemies alive in the npc spawner and also checks to see if the next wave can be spawned
	if (npcSpawner)
	{
		npcSpawner->setEnemiesAlive(npcSpawner->getEnemiesAlive() - 1);
		npcSpawner->checkIfnextWave();
	}
	
	if (CurrentController != nullptr) {
		// Stop movement so the death animation plays immediately
		CurrentController->StopMovement();
		// Unpossess to stop AI
		CurrentController->UnPossess();
		// Destroy the controller, since it's not part of the enemy anymore
		CurrentController->Destroy();
		
	}
	GetWorld()->DestroyActor(this);
}

// Called to bind functionality to input
void ABaseNpc::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//Enables or disables the melee collision bool  and also calls the attack start or end function depending on what the bool is currently set as 
void ABaseNpc::enableOrDisableMeleeCollision()
{
	if(isMeleeCollisionEnabled == true)
	{
		
		AttackEnd();
		isMeleeCollisionEnabled = false;
	}

	else if(isMeleeCollisionEnabled == false)
	{
		AttackStart();
		isMeleeCollisionEnabled = true;
	}
}

void ABaseNpc::BaseAttack()
{
	if (Attackmontage)
	{
		if (isActive)
		{
			//UE_LOG(LogTemp, Error, TEXT("animation is playing"));
			PlayAnimMontage(Attackmontage);
		}
	}
}

UAnimMontage* ABaseNpc::getMontage() const
{
	return Attackmontage;
}

UBehaviorTree* ABaseNpc::GetBehaviorTree() const
{
	return BehaviorTree;
}


//sets the collision profiles which enables it to deal damage
//These are in separate functions to the enable and disable melee
//collision because sometimes a specific action needs to be called

void ABaseNpc::AttackStart()
{
	meleeCollision->SetCollisionProfileName("EnemyMelee");
	meleeCollision->SetNotifyRigidBodyCollision(true);
	
}

void ABaseNpc::AttackEnd()
{
	meleeCollision->SetCollisionProfileName("NoCollision");
	meleeCollision->SetNotifyRigidBodyCollision(false);
}

//Sets the actors status to false and sets its attack range to 0 (no movement is effected in this class
//because the base npc has no movement ability and it is disabled inside the overridden stop actions function
// in the moving npc class 
void ABaseNpc::StopActions()
{
	isActive = false;
	attackRange = 0.0f;
}

//Sets the actors isActive bool to true and resets the attack range
//no movement is affected in this because that is all handled in the moving npc class
void ABaseNpc::AllowActions()
{
	isActive = true;
	attackRange = attackRangeDefault;

}

void ABaseNpc::applyDamageUI() // sets the health in the widget when the npc has been damaged
{
	auto const uWidget = Cast<UNPCHealthBar>(widget->GetUserWidgetObject());

	if (uWidget)
	{
		uWidget->set_bar_value_percent(DamageableComponent->Get_Health() / DamageableComponent->Get_Max_Health());
	}
}

void ABaseNpc::SetRotation(FRotator LookAt)
{
	SetActorRotation(LookAt);
}

//applies damage to the npc using bibs damage component
// old code was commented out because it wasnt needed due to the damage component 
float ABaseNpc::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	
	AActor::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	if (isActive == true)
	{
		//this->StopActions();
	}

	else if (isActive == false)
	{
	//	this->AllowActions();
	}
	currentHealth = FMath::Clamp(currentHealth - DamageAmount, 0.0f, maxHealth);
	this->applyDamageUI();
	
	if (DamageableComponent->Get_Health() <= 0)
	{
		VOnDeath();
	}
	return DamageAmount;
}

//deals if it hits the player when the function is called
// Using the new damage component 
void ABaseNpc::onAttackOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult)
{
	
	if(ACPlayer* const player = Cast<ACPlayer>(HitActor))
	{
		UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
		if(pDmgComp)
		{
			pDmgComp->ReceiveDamage(damageAmount);
		}
	}
}

void ABaseNpc::onAttackOverlapEnd(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex)
{
	
}
