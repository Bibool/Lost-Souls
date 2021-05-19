// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FActorDistanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFActorDistanceData() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FActorDistanceData();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
class UScriptStruct* FActorDistanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorDistanceData, Z_Construct_UPackage__Script_GCAA(), TEXT("ActorDistanceData"), sizeof(FActorDistanceData), Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FActorDistanceData>()
{
	return FActorDistanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorDistanceData(FActorDistanceData::StaticStruct, TEXT("/Script/GCAA"), TEXT("ActorDistanceData"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFActorDistanceData
{
	FScriptStruct_GCAA_StaticRegisterNativesFActorDistanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorDistanceData")),new UScriptStruct::TCppStructOps<FActorDistanceData>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFActorDistanceData;
	struct Z_Construct_UScriptStruct_FActorDistanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDistanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Structures/FActorDistanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorDistanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorDistanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"ActorDistanceData",
		sizeof(FActorDistanceData),
		alignof(FActorDistanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDistanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDistanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorDistanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorDistanceData"), sizeof(FActorDistanceData), Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorDistanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash() { return 636413480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
