// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCRangedSpell.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GCAA/Player/CPlayer.h"

// Sets default values
ANPCRangedSpell::ANPCRangedSpell()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
   //PrimaryActorTick.bCanEverTick = true;

   //MeshComp = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "StaticMeshComp" ) );
   //MeshComp->SetOnlyOwnerSee( false );            // otherwise won't be visible in the multiplayer
   //MeshComp->SetVisibility( true );
   //MeshComp->SetupAttachment( RootComponent );


   // Use a sphere as a simple collision representation
    CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    CollisionComp->InitSphereRadius(3.0f);
    CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");

    SetRootComponent(CollisionComp);

	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
   
    BulletMovement->InitialSpeed = 7000.0f;
    BulletMovement->MaxSpeed = 7000.0f;
    BulletMovement->bRotationFollowsVelocity = true;
    BulletMovement->bShouldBounce = false;

}





// Called when the game starts or when spawned
void ANPCRangedSpell::BeginPlay()
{
	Super::BeginPlay();

	//sets the rules for the melee collision box so it is always attatched to a certain socket 

	if(CollisionComp)
	{
		CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ANPCRangedSpell::OnOverlapBegin);        // set up a notification for when this component hits something blocking
		CollisionComp->OnComponentHit.AddDynamic(this, &ANPCRangedSpell::OnHit);
	}
	//attaches the collision to the delegates



}

// Called every frame
void ANPCRangedSpell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCRangedSpell::OnOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult)
{
	if (ACPlayer* const player = Cast<ACPlayer>(HitActor))
	{
		UDamageComponent* pDmgComp = HitActor->FindComponentByClass<UDamageComponent>();
		if (pDmgComp)
		{
			pDmgComp->ReceiveDamage(10.0f);
		}
	}
}


void ANPCRangedSpell::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (ACPlayer* const player = Cast<ACPlayer>(OtherActor))
	{
		UDamageComponent* pDmgComp = OtherActor->FindComponentByClass<UDamageComponent>();
		if (pDmgComp)
		{
			pDmgComp->ReceiveDamage(10.0f);
		}
	}
}
