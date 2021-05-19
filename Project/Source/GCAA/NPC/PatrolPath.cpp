// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolPath.h"
#include "NavigationSystem.h"

APatrolPath::APatrolPath()
{
}

FVector APatrolPath::get_patrol_point(int const index) const
{

	return patrolPoints[index];
}

int APatrolPath::num() const
{
	return patrolPoints.Num();
}

void APatrolPath::AddPatrolPoint(FVector const& newPoint)
{
	patrolPoints.Add(newPoint);
}

void APatrolPath::SpawnRandomPath(int numOfPoints, float pathRadius)
{
	DeletePatrolPoints(); //deletes any patrol points that may have been in the array as we only want the new ones being spawned 
	FVector const pathLocation(GetActorLocation());
	if (UNavigationSystemV1* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
	{
		AddPatrolPoint(FVector(0.0f, 0.0f, 0.0f));
		for (int i = 0; i <= numOfPoints; i++) //adds a point for how many number of points are passed through the function 
		{
			FNavLocation Loc;
			if (NavSys->GetRandomPointInNavigableRadius(pathLocation, pathRadius , Loc, nullptr))
			{
				AddPatrolPoint(Loc.Location - pathLocation) ;
			}
		}
	}
}
void APatrolPath::DeletePatrolPoints()
{
	patrolPoints.Empty();
}

void APatrolPath::DeletePatrolPath()
{
	ConditionalBeginDestroy();
	GEngine->ForceGarbageCollection(true);
}