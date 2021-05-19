// Fill out your copyright notice in the Description page of Project Settings.


#include "FindEnemyQueryContext.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BaseNpc.h"
#include "BaseNpcController.h"

void UFindEnemyQueryContext::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
	Super::ProvideContext(QueryInstance, ContextData);
	//gets the owner of the query and casts it to an actor
	//then gets the actors controller and casts it to the base npc controller
	ABaseNpcController* controller = Cast<ABaseNpcController>((Cast<AActor>((QueryInstance.Owner).Get())->GetInstigatorController()));
	if (controller && controller->GetSeenEnemy())
	{
		UEnvQueryItemType_Actor::SetContextHelper(ContextData, controller->GetSeenEnemy());
	}
}

