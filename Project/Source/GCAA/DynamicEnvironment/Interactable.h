////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This class provides the UInteractable interface specification.  
// All EnvironemntItems (eg. doors, platforms) must implmenent this interface before interaction can occur 
// with a Environment Controller (Lever, door button).
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Interactable.generated.h"

UINTERFACE()
class GCAA_API UInteractable: public UInterface
{
	GENERATED_BODY()
};

/**  */
class GCAA_API IInteractable
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Interactable)
	void PerformInteract();
	
};


