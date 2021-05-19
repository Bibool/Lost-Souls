// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/AIMissile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMissile() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AAIMissile_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AAIMissile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GCAA_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAIMissile::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_hitResult);
		P_NATIVE_END;
	}
	void AAIMissile::StaticRegisterNativesAAIMissile()
	{
		UClass* Class = AAIMissile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AAIMissile::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics
	{
		struct AIMissile_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult hitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMissile_eventOnOverlapBegin_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMissile_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMissile_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMissile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AIMissile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIMissile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMissile_eventOnOverlapBegin_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_hitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_hitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_overlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function to set the collision\n" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Function to set the collision" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIMissile, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(AIMissile_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIMissile_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIMissile_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIMissile_NoRegister()
	{
		return AAIMissile::StaticClass();
	}
	struct Z_Construct_UClass_AAIMissile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fShakeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fShakeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fUpwardsLaunchAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fUpwardsLaunchAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CamShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MissileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissileParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MissileParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitiateMissileSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitiateMissileSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIMissile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIMissile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIMissile_OnOverlapBegin, "OnOverlapBegin" }, // 4237704198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/AIMissile.h" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_fShakeRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Shake" },
		{ "Comment", "// Radius in where the camera shake works\n" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Radius in where the camera shake works" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_fShakeRadius = { "fShakeRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, fShakeRadius), METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_fShakeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_fShakeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_DamageableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// Calls the damage component in order to cause damage to Player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Calls the damage component in order to cause damage to Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_DamageableComponent = { "DamageableComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, DamageableComponent), Z_Construct_UClass_UDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_DamageableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_DamageableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_fDamageAmount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Damage" },
		{ "Comment", "// How much damage is dealt to the Player by the Missiles\n" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "How much damage is dealt to the Player by the Missiles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_fDamageAmount = { "fDamageAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, fDamageAmount), METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_fDamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_fDamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_fUpwardsLaunchAmount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Launch Height" },
		{ "Comment", "// How far we want the Missile to launch upwards\n" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "How far we want the Missile to launch upwards" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_fUpwardsLaunchAmount = { "fUpwardsLaunchAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, fUpwardsLaunchAmount), METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_fUpwardsLaunchAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_fUpwardsLaunchAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_CamShake_MetaData[] = {
		{ "Category", "AIMissile" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_CamShake = { "CamShake", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, CamShake), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_CamShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_CamShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "Comment", "// Sphere collision component\n//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Collision\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Sphere collision component\nUPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Collision\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Static Mesh Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Static Mesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileMesh = { "MissileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, MissileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Projectile Movement Component\n//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Movement\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Projectile Movement Component\nUPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Movement\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particles" },
		{ "Comment", "// Particle system\n//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Particles\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "Particle system\nUPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Particles\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileParticles = { "MissileParticles", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, MissileParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particles" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = \"Particles\")\n" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"Particles\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSystem = { "ExplosionSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, ExplosionSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_InitiateMissileSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_InitiateMissileSound = { "InitiateMissileSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, InitiateMissileSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_InitiateMissileSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_InitiateMissileSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_Decal_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, Decal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_Decal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "NPC/AIMissile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIMissile, ExplosionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIMissile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_fShakeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_DamageableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_fDamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_fUpwardsLaunchAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_CamShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_MissileParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_InitiateMissileSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_Decal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMissile_Statics::NewProp_ExplosionSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIMissile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIMissile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIMissile_Statics::ClassParams = {
		&AAIMissile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIMissile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIMissile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMissile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIMissile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIMissile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIMissile, 1696962345);
	template<> GCAA_API UClass* StaticClass<AAIMissile>()
	{
		return AAIMissile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIMissile(Z_Construct_UClass_AAIMissile, &AAIMissile::StaticClass, TEXT("/Script/GCAA"), TEXT("AAIMissile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIMissile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
