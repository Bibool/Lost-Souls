// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/ErosionEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErosionEnemy() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AErosionEnemy_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AErosionEnemy();
	GCAA_API UClass* Z_Construct_UClass_AMovingNpc();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_AAIMissile_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AAIBullet_NoRegister();
// End Cross Module References
	void AErosionEnemy::StaticRegisterNativesAErosionEnemy()
	{
	}
	UClass* Z_Construct_UClass_AErosionEnemy_NoRegister()
	{
		return AErosionEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AErosionEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iNumberOfMissiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iNumberOfMissiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBulletSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBulletSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitiateLaserSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitiateLaserSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fLaserStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fLaserStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MissileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErosionEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMovingNpc,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/ErosionEnemy.h" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_iNumberOfMissiles_MetaData[] = {
		{ "Category", "Missile" },
		{ "Comment", "// Int to set how many Missiles\n" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
		{ "ToolTip", "Int to set how many Missiles" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_iNumberOfMissiles = { "iNumberOfMissiles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, iNumberOfMissiles), METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_iNumberOfMissiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_iNumberOfMissiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_SpawnBulletSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Bullet shot sound\n" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
		{ "ToolTip", "Bullet shot sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_SpawnBulletSound = { "SpawnBulletSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, SpawnBulletSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_SpawnBulletSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_SpawnBulletSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_InitiateLaserSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Laser initiated sound\n" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
		{ "ToolTip", "Laser initiated sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_InitiateLaserSound = { "InitiateLaserSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, InitiateLaserSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_InitiateLaserSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_InitiateLaserSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_fLaserStop_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_fLaserStop = { "fLaserStop", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, fLaserStop), METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_fLaserStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_fLaserStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserHandle_MetaData[] = {
		{ "Comment", "//float\x09\x09""fBulletWait;\n" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
		{ "ToolTip", "float           fBulletWait;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserHandle = { "LaserHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, LaserHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserParticles_MetaData[] = {
		{ "Category", "Laser" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserParticles = { "LaserParticles", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, LaserParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_MissileClass_MetaData[] = {
		{ "Category", "Missiles" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_MissileClass = { "MissileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, MissileClass), Z_Construct_UClass_AAIMissile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_MissileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_MissileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErosionEnemy_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "NPC/ErosionEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AErosionEnemy_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErosionEnemy, BulletClass), Z_Construct_UClass_AAIBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::NewProp_BulletClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErosionEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_iNumberOfMissiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_SpawnBulletSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_InitiateLaserSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_fLaserStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_LaserParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_MissileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErosionEnemy_Statics::NewProp_BulletClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErosionEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErosionEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErosionEnemy_Statics::ClassParams = {
		&AErosionEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AErosionEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AErosionEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErosionEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErosionEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErosionEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErosionEnemy, 3185491391);
	template<> GCAA_API UClass* StaticClass<AErosionEnemy>()
	{
		return AErosionEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErosionEnemy(Z_Construct_UClass_AErosionEnemy, &AErosionEnemy::StaticClass, TEXT("/Script/GCAA"), TEXT("AErosionEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErosionEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
