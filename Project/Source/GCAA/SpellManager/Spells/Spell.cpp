///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Spell.h"

#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
ASpell::ASpell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionSphereComponent = CreateDefaultSubobject<USphereComponent>( TEXT( "Collision Sphere" ) );
	CollisionSphereComponent->SetRelativeLocation( FVector::ZeroVector );
	CollisionSphereComponent->InitSphereRadius( 40.0f );
	CollisionSphereComponent->SetCollisionProfileName( TEXT( "Spell" ) );
	CollisionSphereComponent->SetCollisionEnabled( ECollisionEnabled::QueryAndPhysics );
	CollisionSphereComponent->OnComponentBeginOverlap.AddDynamic( this, &ASpell::OnOverlapBegin );
	CollisionSphereComponent->OnComponentEndOverlap.AddDynamic( this, &ASpell::OnOverlapEnd );
	RootComponent = CollisionSphereComponent;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "Static Mesh" ) );
	StaticMeshComponent->SetupAttachment( CollisionSphereComponent );	

	PSSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>( TEXT( "Particle System" ) );
	PSSystemComponent->SetRelativeLocation( FVector::ZeroVector );
	PSSystemComponent->SetupAttachment( CollisionSphereComponent );

	RootComponent->SetVisibility( false, true );

	m_sCurrentRotationOfCamera = FRotator::ZeroRotator;
	m_fSelfDestructTime = 0.f;
	m_bCanFire = false;
	m_bCanAutoDestroy = true;
}

// Called when the game starts or when spawned
void ASpell::BeginPlay()
{
	Super::BeginPlay();

	Initialize();	
}

// Called every frame
void ASpell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Can it tick?
	if ( m_bCanFire )
	{
		FireLogic( DeltaTime );
	}
}

void ASpell::SetSelfDestroyTime( float fTime )
{
	m_fSelfDestructTime = fTime;
}

void ASpell::Destroyed()
{
	Sleep();
}

void ASpell::SetManager( ASpellManager* pcSpellManager )
{
	m_pcSpellManager = pcSpellManager;
}

void ASpell::SetCPlayer(ACPlayer* pcPlayer)
{
	m_pcPlayer = pcPlayer;
}

void ASpell::Sleep()
{
	m_bCanFire = false;
	RootComponent->SetVisibility( false, true );
	SetCanPoolUse( true );	
	SetActorLocation( FVector::ZeroVector );
}

void ASpell::Awake()
{
	RootComponent->SetVisibility( true, true );
	SetCanPoolUse( false );

	if (m_bCanAutoDestroy )
	{
		GetWorldTimerManager().SetTimer( m_sDelayedDestructionTimer, this, &ASpell::Destroyed, m_fSelfDestructTime, false );
	}

	if ( m_pcSpellManager->GetPlayer() )
	{
		FVector v3TargetLocation;

		if ( m_pcSpellManager->GetPlayer()->Get_IsLockedOn() && m_pcSpellManager->GetPlayer()->GetTargetLockData().ATargetLockedActor != nullptr)
		{
			v3TargetLocation = m_pcSpellManager->GetPlayer()->GetTargetLockData().ATargetLockedActor->GetActorLocation();
		}
		else
		{
			v3TargetLocation = m_pcSpellManager->GetPlayer()->GetTargetLockData().CursorInWorldVector;
		}

		SetActorLocation( m_pcSpellManager->GetPlayer()->GetSpellSpawnSceneComponent()->GetComponentLocation() );
		SetActorRotation( UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), v3TargetLocation ) );
	}
}

void ASpell::VFireEvent()
{
	Fire();
}

void ASpell::Fire()
{
	Awake();
	m_bCanFire = true;
	// Here, we would set the look at rotation to the spell in the following manner:
	// Start: Player Spell Cast socket (Hands) but in this example; The player itself.
	// Target: Query the player for the depth location (really the cursor location in worldspace).
	// And would look something like this:

	//if (false)	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation( mpcSpellManager->GetPlayer()->GetActorLocation(), mpcSpellManager->GetPlayer()->GetDepthVector() );

	AdditionalAwakeLogic();
	m_sCurrentRotationOfCamera = m_pcSpellManager->GetPlayer()->GetFollowCamera()->GetComponentRotation();
}

void ASpell::OnHit( class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit )
{
	//if (OtherActor->ActorHasTag( "Damage" ))
	//{
	//	//CollisionLogic( OtherActor );
	//	UE_LOG( LogTemp, Warning, TEXT( "Hit Event Fired!" ) );
	//}
}

void ASpell::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG( LogTemp, Warning, TEXT( "Name: %s" ), *FString( OtherComp->GetName() ) );
	if (!m_bIsInCollision && !GetCanPoolUse() )
	{
		if (OtherComp->ComponentHasTag( "Terrain" ))
		{
			m_bIsInCollision = true;
			NonEnemyCollisionLogic( OtherComp, SweepResult );
			UE_LOG( LogTemp, Warning, TEXT( "Terrain Overlap." ) );
		}
	}

	if (!m_bIsInCollision && !GetCanPoolUse())
	{
		if (OtherActor->ActorHasTag( "Damage" ))
		{
			m_bIsInCollision = true;
			CollisionLogic( OtherActor );
			UE_LOG( LogTemp, Warning, TEXT( "Actor Overlap." ) );
		}
	}
}

void ASpell::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag( "Damage" ))
	{
		CollisionEndLogic( OtherActor );
	}
}

