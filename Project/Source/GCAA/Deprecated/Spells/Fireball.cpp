///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Fireball.h"

#include "DrawDebugHelpers.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "GCAA/Player/CPlayer.h"
#include "GCAA/NPC/BaseNpc.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"


#include "Engine/CollisionProfile.h"

// Sets default values
AFireball::AFireball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<USphereComponent>( TEXT( "RootComponent" ) );
	RootComponent = CollisionComp;
	CollisionComp->InitSphereRadius( 40.0f );
	CollisionComp->SetCollisionProfileName( TEXT( "Ball" ) );

	
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "VisualRepresentation" ) );
	staticMesh->SetupAttachment( RootComponent );
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset( TEXT( "/Game/Geometry/Meshes/1M_Cube.1M_Cube" ) );
	if (SphereVisualAsset.Succeeded())
	{
		staticMesh->SetStaticMesh( SphereVisualAsset.Object );
		staticMesh->SetWorldScale3D( FVector( 0.8f ) );
	}

	staticMesh->OnComponentHit.AddDynamic( this, &AFireball::OnHit );
	staticMesh->SetWalkableSlopeOverride( FWalkableSlopeOverride( WalkableSlope_Unwalkable, 0.f ) );
	staticMesh->CanCharacterStepUpOn = ECB_No;

	RootComponent->SetVisibility( false, true );

	CurrentRotationOfCamera = FRotator::ZeroRotator;
	SelfDestructTime = 0.f;
	bCanFire = false;
	sIdentifier = FSpellIdentifierStruct();
}

// Called when the game starts or when spawned
void AFireball::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld())
	{
		UE_LOG( LogTemp, Warning, TEXT( "World valid, finding player" ) );		
		SetActorLocation( GetWorld()->GetFirstPlayerController()->K2_GetActorLocation() );
		DrawDebugSphere( GetWorld(), GetActorLocation(), 62.0f, 20, FColor::Blue, true, 20.0f, 1, 5.f );
	}
	
}

void AFireball::SetSelfDestroyTime(float fTime)
{
	SelfDestructTime = fTime;
}


// Called every frame
void AFireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCanFire)
	{
		// We move the fireball along it's forward vector
		// TODO: This will be instead querying the current hand socket from the skeleton mesh as currentLoc
		FVector currentLoc = GetActorLocation();
		currentLoc += GetActorForwardVector() * 2000.f * DeltaTime;

		SetActorLocation( currentLoc );
		SetActorRotation( CurrentRotationOfCamera );

		DrawDebugSphere(GetWorld(), GetActorLocation(), 62.0f, 20, FColor::Blue, true, 1.0f, 1, 5.f );
	}
}


void AFireball::SetSpeed(float fSpeed)
{
	SpeedMulti = fSpeed;
}


void AFireball::Destroyed()
{
	UE_LOG( LogTemp, Warning, TEXT( "Called destroy" ) );
	//mpcSpellManager->Destroy( sIdentifier, this );
	Sleep();
}


void AFireball::SetManager(ASpellManager* pcSpellManager)
{
	mpcSpellManager = pcSpellManager;
}

FSpellIdentifierStruct AFireball::GetIdentifier()
{
	return sIdentifier;
}

void AFireball::SetIdentifier(FSpellIdentifierStruct id)
{
	sIdentifier = id;
}


//ASpellManager::SSpellIdentifier AFireball::GetIdentifier()
//{
//	return sIdentifier;
//}
//
//void AFireball::SetIdentifier(ASpellManager::SSpellIdentifier identifier)
//{
//	sIdentifier = identifier;
//}



void AFireball::Sleep()
{
	bCanFire = false;
	RootComponent->SetVisibility( false, true );
	sIdentifier.isActive = false;
	SetActorLocation( FVector::ZeroVector );

	UE_LOG( LogTemp, Warning, TEXT( "Fireball is going to sleep." ) );
}

void AFireball::Awake()
{
	RootComponent->SetVisibility( true, true );
	sIdentifier.isActive = true;
	GetWorldTimerManager().SetTimer( DelayedDestructionTimer, this, &AFireball::Destroyed, SelfDestructTime, false );
	
	if (mpcSpellManager->GetPlayer())
	{
		FVector targetlocation = FVector::ZeroVector;
		
		if (mpcSpellManager->GetPlayer()->Get_IsLockedOn())
		{
			targetlocation = mpcSpellManager->GetPlayer()->GetTargetLockData().ATargetLockedActor->GetActorLocation();
		}
		else
		{
			targetlocation = mpcSpellManager->GetPlayer()->GetTargetLockData().CursorInWorldVector;
		}
		
		//const FVector cursorLoc = mpcSpellManager->GetPlayer()->GetTargetLockData().CursorInWorldVector;


		SetActorRotation( UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), targetlocation ) );
		//SetActorRotation( mpcSpellManager->GetPlayer()->GetActorRotation() );
		
		UE_LOG( LogTemp, Warning, TEXT( "Fireball is waking up." ) );

		// Offset
		const FVector currentLoc = mpcSpellManager->GetPlayer()->GetActorLocation();
		const FVector multipliedForwardVector = GetActorForwardVector() * 100 ;
		const FVector wantedLocation = currentLoc + multipliedForwardVector;
		
		SetActorLocation( wantedLocation );
	}	
}

void AFireball::Fire()
{
	Awake();
	bCanFire = true;

	// Here, we would set the look at rotation to the spell in the following manner:
	// Start: Player Spell Cast socket (Hands) but in this example; The player itself.
	// Target: Query the player for the depth location (really the cursor location in worldspace).
	// And would look something like this:

	//if ( false )	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation( mpcSpellManager->GetPlayer()->GetActorLocation(), mpcSpellManager->GetPlayer()->GetDepthVector() );
	
	CurrentRotationOfCamera = mpcSpellManager->GetPlayer()->GetFollowCamera()->GetComponentRotation();	
	UE_LOG( LogTemp, Warning, TEXT( "Fireball fired." ) );
}

void AFireball::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	
	//auto* Player = Cast<ACPlayer>( OtherActor );
	auto* Enemy = Cast<ABaseNpc>( OtherActor );
	if (Enemy)
	{
		UE_LOG( LogTemp, Warning, TEXT( "Hit Enemy." ) );
		Destroyed();		
	}
}
