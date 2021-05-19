// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNpcController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GCAA/Player/CPlayer.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Blackboard_keys.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Perception/AIPerceptionComponent.h"
#include "BaseNpc.h"
#include "MovingNpc.h"
#include "PatrolPath.h"
#include "aiTags.h"



ABaseNpcController::ABaseNpcController(class FObjectInitializer const& object_initializer)
{
	//sight senses
	sightRadius = 500.0f;
	loseSightRadius = 25.0f;
	peripheralVisionAngleDegree = 90.0f;
	maxAge = 5.0f;
	autoSuccessRange = 520.0f;
	//hearing sense
	hearingRange = 3000.0f;
	setup_perception_system();
}


void ABaseNpcController::BeginPlay()
{
	Super::BeginPlay();

}

//this is called when the controller posses a pawn and it adds the blackboard component to the npc and then spawns a random path if the npc is set to use a patrol path but isnt using a pre defined one 
void ABaseNpcController::OnPossess(APawn* const InPawn)
{
	Super::OnPossess(InPawn);

	if (auto const NPC = Cast<ABaseNpc>(InPawn))
	{
		if (UBehaviorTree* const Btree = NPC->GetBehaviorTree())
		{
			UseBlackboard(Btree->BlackboardAsset, BlackboardComponent);
			
			if (auto const NPCchild = Cast<AMovingNpc>(InPawn))
			{
				if (NPCchild->getSpawnRandomPath())
				{
					BlackboardComponent->SetValueAsBool(bb_keys::spawn_random_path, NPCchild->getSpawnRandomPath());
				}
			}
			RunBehaviorTree(Btree);
		}
		}
}



void ABaseNpcController::on_updated(TArray<AActor*> const& updated_actors)
{
	//for loops which goes through all the actors detected and then goes through each sense and figures out which sense was used and assigns the appropriate response
	for (size_t x = 0; x < updated_actors.Num(); ++x)
	{
		FActorPerceptionBlueprintInfo info;
		GetPerceptionComponent()->GetActorsPerception(updated_actors[x], info);

		for (size_t k = 0; k < info.LastSensedStimuli.Num(); ++k)
		{
			FAIStimulus const stim = info.LastSensedStimuli[k];
			
			if (BlackboardComponent && stim.Tag == tags::noise_tag)
			{
				BlackboardComponent->SetValueAsBool(bb_keys::is_investigating, stim.WasSuccessfullySensed());
				BlackboardComponent->SetValueAsVector(bb_keys::target_location, stim.StimulusLocation);
			}
			
			else if (BlackboardComponent && stim.Type.Name == "Default__AISense_Sight")
			{
				if (auto const ch = Cast<ACPlayer>(updated_actors[k]))
				{
					BlackboardComponent->SetValueAsBool(bb_keys::can_seePlayer, stim.WasSuccessfullySensed());
					BlackboardComponent->SetValueAsBool(bb_keys::is_investigating, false);
					BlackboardComponent->SetValueAsObject(bb_keys::seen_enemy, updated_actors[k]);
				}
				else if (auto const ai = Cast<ABaseNpc>(updated_actors[k]))
				{
					BlackboardComponent->SetValueAsObject(bb_keys::seen_ally, updated_actors[k]);
				}
			}

		}
	}
}


void ABaseNpcController::setup_perception_system()
{

		//creates and initialises the sight configuration object
		sight_config = CreateDefaultSubobject <UAISenseConfig_Sight>(TEXT("Sight Config"));
		if (sight_config)
		{
			SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
			sight_config->SightRadius = 1000;
			sight_config->LoseSightRadius = sight_config->SightRadius + +50.0f;
			sight_config->PeripheralVisionAngleDegrees = 90.0f;
			sight_config->SetMaxAge(maxAge);
			sight_config->AutoSuccessRangeFromLastSeenLocation = 1050.0f;
			sight_config->DetectionByAffiliation.bDetectEnemies = true;
			sight_config->DetectionByAffiliation.bDetectNeutrals = true;
			sight_config->DetectionByAffiliation.bDetectFriendlies = true;
			//adds sight component configuration to perception component
			GetPerceptionComponent()->SetDominantSense(*sight_config->GetSenseImplementation());
			GetPerceptionComponent()->ConfigureSense(*sight_config);
		}

		//creates and initialises hearing config
		hearing_config = CreateDefaultSubobject <UAISenseConfig_Hearing>(TEXT("Hearing Config"));

		if (hearing_config)
		{

			hearing_config->HearingRange = hearingRange;
			hearing_config->DetectionByAffiliation.bDetectEnemies = true;
			hearing_config->DetectionByAffiliation.bDetectNeutrals = true;
			hearing_config->DetectionByAffiliation.bDetectFriendlies = true;
		
			//adds sight component configuration to perception component
			GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &ABaseNpcController::on_updated);
			GetPerceptionComponent()->ConfigureSense(*hearing_config);
		}
}

AActor* ABaseNpcController::GetSeenEnemy()
{
	//Return the seeing pawn
	UObject* object = BlackboardComponent ->GetValueAsObject(bb_keys::seen_enemy);

	return object ? Cast<AActor>(object) : nullptr;
}

AActor* ABaseNpcController::GetSeenAlly()
{
	//Return the seeing pawn
	UObject* object = BlackboardComponent->GetValueAsObject(bb_keys::seen_ally);

	return object ? Cast<AActor>(object) : nullptr;
}

