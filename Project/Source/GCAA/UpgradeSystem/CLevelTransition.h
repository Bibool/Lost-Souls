// Sole Author - Kahina Foudad - GamerCamp 2021

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLevelTransition.generated.h"

UCLASS()
class GCAA_API ACLevelTransition : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	// Constructor
	ACLevelTransition();

	// Box Component - Level Transition
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Level")
	class UBoxComponent* LevelTransition;

	// Billboard Component 
	class UBillboardComponent* Billboard;
	
	// Transition level 
	UPROPERTY(EditAnywhere, Category = "LevelTransition")
		FName LevelTransitionName;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the player overlap - Actor
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
