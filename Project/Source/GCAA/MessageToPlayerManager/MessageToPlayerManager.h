////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines the MessageToPlayerManager class.
// This class will be used to manage the display of messages to the player so they scroll up the screen
// as each message is presented.
//
// Current Limitations:
// Not implemented for prototype.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MessageToPlayerManager.generated.h"

UCLASS(Blueprintable, BlueprintType) 
class GCAA_API UMessageToPlayerManager : public UObject
{
    GENERATED_BODY ()

    UMessageToPlayerManager();

public:

    void Initialise ();

protected:

 };
