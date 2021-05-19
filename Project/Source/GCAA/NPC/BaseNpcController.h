// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "BaseNpcController.generated.h"

//Brandon Middleton
//Base npc controller which sets up perception and then adds the blackboard
class ABaseNpc;
class APatrolPath;
/**
 * 
 */
UCLASS()
class GCAA_API ABaseNpcController : public AAIController
{
	GENERATED_BODY()
public:
	ABaseNpcController(FObjectInitializer const& object_initializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* const InPawn) override;
	
	AActor* GetSeenEnemy();  // pointers to actors in the future which will be used when eqs is implemented to help tell if the npc has spotted the player or a fellow npc
	AActor* GetSeenAlly();	 // pointers to actors in the future which will be used when eqs is implemented to help tell if the npc has spotted the player or a fellow npc

	virtual void setup_perception_system(); //function for setting up the perception system 
private:

	class UAISenseConfig_Hearing* hearing_config; // hearing sense, in the future this will be moved into a different controller

	UPROPERTY()
	UBlackboardComponent* BlackboardComponent; //blackboard component 
	
	UFUNCTION()
	void on_updated(TArray<AActor*> const& updated_actors);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | SightSense", meta = (AllowPrivateAccess = "true"))   
		float sightRadius;																									  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | SightSense", meta = (AllowPrivateAccess = "true"))	  
		float loseSightRadius;																								  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | SightSense", meta = (AllowPrivateAccess = "true"))	  
		float peripheralVisionAngleDegree;																					  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | SightSense", meta = (AllowPrivateAccess = "true"))	  
		float maxAge;																										  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | SightSense", meta = (AllowPrivateAccess = "true"))	  
		float autoSuccessRange;																								  
																															  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Sense | HearingSense", meta = (AllowPrivateAccess = "true")) 
		float hearingRange;

protected:

	class UAISenseConfig_Sight* sight_config; // sight config

	
};
