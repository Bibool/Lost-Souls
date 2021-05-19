#pragma once
//Brandon Middleton 
//Patrol path class used to help the npc navigate a set route 
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolPath.generated.h"

UCLASS()
class GCAA_API APatrolPath : public AActor
{
	GENERATED_BODY()

public:
	APatrolPath();
	void SpawnRandomPath(int numOfPoints, float pathRadius); // function to spawn a random patrol path using a set number of points and a set radius
	FVector get_patrol_point(int const index) const; // gets the position of the point the current npc is on 
	int num() const; // num used to get the index of the array of the patrol path 
	void AddPatrolPoint(FVector const& newPoint); //used to add a new point in the array 
	void DeletePatrolPoints(); //deletes all the points in the array 
	void DeletePatrolPath(); //deletes the path 
private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (MakeEditWidget = "true", AllowPrivateAccess = true));
	TArray<FVector> patrolPoints; //an array of patrol points which can be edited in engine 

};
