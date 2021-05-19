///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "GCAA/Enumerators/ESpellType.h"

#include "FSpellIdentifierStruct.generated.h"

USTRUCT()
struct FSpellIdentifierStruct
{
	GENERATED_BODY()	
public:
	FSpellIdentifierStruct()
		: iID (0)
		, eType (ESpellType::Default)
		, isActive (false )
	{}

	FSpellIdentifierStruct(int id, ESpellType eSpellType, bool b)
		: iID(id)
		, eType (eSpellType)
		, isActive( b )
	{}
	
        int iID;
		ESpellType eType;
		bool isActive;
};