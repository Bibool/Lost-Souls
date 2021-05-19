// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/MovingNpc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingNpc() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AMovingNpc_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AMovingNpc();
	GCAA_API UClass* Z_Construct_UClass_ABaseNpc();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AMovingNpc::StaticRegisterNativesAMovingNpc()
	{
	}
	UClass* Z_Construct_UClass_AMovingNpc_NoRegister()
	{
		return AMovingNpc::StaticClass();
	}
	struct Z_Construct_UClass_AMovingNpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrollingNpc_MetaData[];
#endif
		static void NewProp_patrollingNpc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_patrollingNpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnRandomPath_MetaData[];
#endif
		static void NewProp_spawnRandomPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_spawnRandomPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPathClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PatrolPathClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOfPatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfPatrolPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathSpawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pathSpawnRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingNpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseNpc,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/MovingNpc.h" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Stats" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_runSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Stats" },
		{ "Comment", "//walk speed\n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "walk speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, runSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_runSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_runSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//run speed\n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "run speed" },
	};
#endif
	void Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc_SetBit(void* Obj)
	{
		((AMovingNpc*)Obj)->patrollingNpc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc = { "patrollingNpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingNpc), &Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//bool which checks if the npc should be  patrolling \n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "bool which checks if the npc should be  patrolling" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, PatrolPath), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//the patrol path being set\n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "the patrol path being set" },
	};
#endif
	void Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath_SetBit(void* Obj)
	{
		((AMovingNpc*)Obj)->spawnRandomPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath = { "spawnRandomPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingNpc), &Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPathClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//bool which checks if the npc should spawn a random patrol path \n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "bool which checks if the npc should spawn a random patrol path" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPathClass = { "PatrolPathClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, PatrolPathClass), Z_Construct_UClass_APatrolPath_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPathClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPathClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_numOfPatrolPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//default patrol path class which is used to help spawn a random path \n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "default patrol path class which is used to help spawn a random path" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_numOfPatrolPoints = { "numOfPatrolPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, numOfPatrolPoints), METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_numOfPatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_numOfPatrolPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingNpc_Statics::NewProp_pathSpawnRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Path" },
		{ "Comment", "//int which says how many points should be in the patrol path \n" },
		{ "ModuleRelativePath", "NPC/MovingNpc.h" },
		{ "ToolTip", "int which says how many points should be in the patrol path" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingNpc_Statics::NewProp_pathSpawnRadius = { "pathSpawnRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingNpc, pathSpawnRadius), METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::NewProp_pathSpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::NewProp_pathSpawnRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingNpc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_runSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_patrollingNpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_spawnRandomPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_PatrolPathClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_numOfPatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingNpc_Statics::NewProp_pathSpawnRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingNpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingNpc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingNpc_Statics::ClassParams = {
		&AMovingNpc::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingNpc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingNpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingNpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingNpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingNpc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingNpc, 2418243656);
	template<> GCAA_API UClass* StaticClass<AMovingNpc>()
	{
		return AMovingNpc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingNpc(Z_Construct_UClass_AMovingNpc, &AMovingNpc::StaticClass, TEXT("/Script/GCAA"), TEXT("AMovingNpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingNpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
