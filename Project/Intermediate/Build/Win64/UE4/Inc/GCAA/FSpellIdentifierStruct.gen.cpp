// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FSpellIdentifierStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSpellIdentifierStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FSpellIdentifierStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
class UScriptStruct* FSpellIdentifierStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FSpellIdentifierStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpellIdentifierStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("SpellIdentifierStruct"), sizeof(FSpellIdentifierStruct), Get_Z_Construct_UScriptStruct_FSpellIdentifierStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FSpellIdentifierStruct>()
{
	return FSpellIdentifierStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpellIdentifierStruct(FSpellIdentifierStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("SpellIdentifierStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFSpellIdentifierStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFSpellIdentifierStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpellIdentifierStruct")),new UScriptStruct::TCppStructOps<FSpellIdentifierStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFSpellIdentifierStruct;
	struct Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Structures/FSpellIdentifierStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpellIdentifierStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"SpellIdentifierStruct",
		sizeof(FSpellIdentifierStruct),
		alignof(FSpellIdentifierStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpellIdentifierStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpellIdentifierStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpellIdentifierStruct"), sizeof(FSpellIdentifierStruct), Get_Z_Construct_UScriptStruct_FSpellIdentifierStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpellIdentifierStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpellIdentifierStruct_Hash() { return 2913006408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
