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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pcActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pcActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewProp_pcActor_MetaData[] = {
		{ "ModuleRelativePath", "Structures/FActorDistanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewProp_pcActor = { "pcActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorDistanceData, pcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewProp_pcActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewProp_pcActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorDistanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDistanceData_Statics::NewProp_pcActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorDistanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"ActorDistanceData",
		sizeof(FActorDistanceData),
		alignof(FActorDistanceData),
		Z_Construct_UScriptStruct_FActorDistanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDistanceData_Statics::PropPointers),
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
	uint32 Get_Z_Construct_UScriptStruct_FActorDistanceData_Hash() { return 3107806128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
