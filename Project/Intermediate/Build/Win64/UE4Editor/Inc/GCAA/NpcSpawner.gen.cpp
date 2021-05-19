// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/NpcSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNpcSpawner() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ANpcSpawner_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ANpcSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_ABaseNpc_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ADoorButton_NoRegister();
// End Cross Module References
	void ANpcSpawner::StaticRegisterNativesANpcSpawner()
	{
	}
	UClass* Z_Construct_UClass_ANpcSpawner_NoRegister()
	{
		return ANpcSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ANpcSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseNPCClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNPCClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseNPCClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_SpawnOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpawnOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOfEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemiesIncreasedPerWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_enemiesIncreasedPerWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOfWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfWaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wavesRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_wavesRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANpcSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/NpcSpawner.h" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass_Inner = { "BaseNPCClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseNpc_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass = { "BaseNPCClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, BaseNPCClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_DoorActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_DoorActor = { "DoorActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, DoorActor), Z_Construct_UClass_ADoorButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_DoorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_DoorActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Class\", meta = (AllowPrivateAccess = \"true\"))\n//TArray <TSubclassOf<ADoor>> BaseNPCClass;\n" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Class\", meta = (AllowPrivateAccess = \"true\"))\nTArray <TSubclassOf<ADoor>> BaseNPCClass;" },
	};
#endif
	void Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay_SetBit(void* Obj)
	{
		((ANpcSpawner*)Obj)->SpawnOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay = { "SpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANpcSpawner), &Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfEnemies_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfEnemies = { "numOfEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, numOfEnemies), METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_enemiesIncreasedPerWave_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_enemiesIncreasedPerWave = { "enemiesIncreasedPerWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, enemiesIncreasedPerWave), METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_enemiesIncreasedPerWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_enemiesIncreasedPerWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfWaves_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfWaves = { "numOfWaves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, numOfWaves), METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfWaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_spawnRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_spawnRadius = { "spawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, spawnRadius), METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_spawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_spawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcSpawner_Statics::NewProp_wavesRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Class" },
		{ "ModuleRelativePath", "NPC/NpcSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANpcSpawner_Statics::NewProp_wavesRemaining = { "wavesRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcSpawner, wavesRemaining), METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_wavesRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::NewProp_wavesRemaining_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANpcSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_BaseNPCClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_DoorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_SpawnOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_enemiesIncreasedPerWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_numOfWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_spawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcSpawner_Statics::NewProp_wavesRemaining,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANpcSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANpcSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANpcSpawner_Statics::ClassParams = {
		&ANpcSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANpcSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANpcSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANpcSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANpcSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANpcSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANpcSpawner, 655900208);
	template<> GCAA_API UClass* StaticClass<ANpcSpawner>()
	{
		return ANpcSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANpcSpawner(Z_Construct_UClass_ANpcSpawner, &ANpcSpawner::StaticClass, TEXT("/Script/GCAA"), TEXT("ANpcSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANpcSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
