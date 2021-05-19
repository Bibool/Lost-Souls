// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/PyroxenesExplosion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyroxenesExplosion() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_APyroxenesExplosion_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_APyroxenesExplosion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GCAA_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APyroxenesExplosion::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APyroxenesExplosion::execonAttackOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onAttackOverlapEnd(Z_Param_OverlappedComponent,Z_Param_HitActor,Z_Param_OtherComponent,Z_Param_BodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APyroxenesExplosion::execonAttackOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
		P_GET_UBOOL(Z_Param_FromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onAttackOverlapBegin(Z_Param_OverlappedComponent,Z_Param_HitActor,Z_Param_OtherComponent,Z_Param_BodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APyroxenesExplosion::StaticRegisterNativesAPyroxenesExplosion()
	{
		UClass* Class = APyroxenesExplosion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onAttackOverlapBegin", &APyroxenesExplosion::execonAttackOverlapBegin },
			{ "onAttackOverlapEnd", &APyroxenesExplosion::execonAttackOverlapEnd },
			{ "OnHit", &APyroxenesExplosion::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics
	{
		struct PyroxenesExplosion_eventonAttackOverlapBegin_Parms
		{
			const UPrimitiveComponent* OverlappedComponent;
			const AActor* HitActor;
			UPrimitiveComponent* OtherComponent;
			int32 BodyIndex;
			bool FromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromSweep_MetaData[];
#endif
		static void NewProp_FromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_HitActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapBegin_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_HitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_HitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_BodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapBegin_Parms, BodyIndex), METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_BodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_BodyIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep_SetBit(void* Obj)
	{
		((PyroxenesExplosion_eventonAttackOverlapBegin_Parms*)Obj)->FromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PyroxenesExplosion_eventonAttackOverlapBegin_Parms), &Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_BodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_FromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyroxenesExplosion, nullptr, "onAttackOverlapBegin", nullptr, nullptr, sizeof(PyroxenesExplosion_eventonAttackOverlapBegin_Parms), Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics
	{
		struct PyroxenesExplosion_eventonAttackOverlapEnd_Parms
		{
			const UPrimitiveComponent* OverlappedComponent;
			const AActor* HitActor;
			UPrimitiveComponent* OtherComponent;
			int32 BodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_HitActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapEnd_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_HitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_HitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapEnd_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_BodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventonAttackOverlapEnd_Parms, BodyIndex), METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_BodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_BodyIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::NewProp_BodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyroxenesExplosion, nullptr, "onAttackOverlapEnd", nullptr, nullptr, sizeof(PyroxenesExplosion_eventonAttackOverlapEnd_Parms), Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics
	{
		struct PyroxenesExplosion_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PyroxenesExplosion_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APyroxenesExplosion, nullptr, "OnHit", nullptr, nullptr, sizeof(PyroxenesExplosion_eventOnHit_Parms), Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APyroxenesExplosion_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APyroxenesExplosion_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APyroxenesExplosion_NoRegister()
	{
		return APyroxenesExplosion::StaticClass();
	}
	struct Z_Construct_UClass_APyroxenesExplosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionVfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionVfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APyroxenesExplosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APyroxenesExplosion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapBegin, "onAttackOverlapBegin" }, // 2708961431
		{ &Z_Construct_UFunction_APyroxenesExplosion_onAttackOverlapEnd, "onAttackOverlapEnd" }, // 1137263146
		{ &Z_Construct_UFunction_APyroxenesExplosion_OnHit, "OnHit" }, // 3662594085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/PyroxenesExplosion.h" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_DamageableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_DamageableComponent = { "DamageableComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, DamageableComponent), Z_Construct_UClass_UDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_DamageableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_DamageableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_damageAmount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "Comment", "// Called every frame\n" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, damageAmount), METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_damageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_damageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_lifeSpan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "Comment", "// how much damage is dealt\n" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
		{ "ToolTip", "how much damage is dealt" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_lifeSpan = { "lifeSpan", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, lifeSpan), METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_lifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_lifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "Comment", "// how long the explosion will last, this will not be used in the future \n" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
		{ "ToolTip", "how long the explosion will last, this will not be used in the future" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "Comment", "//how large the explosion is\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
		{ "ToolTip", "how large the explosion is" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, ExplosionRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionVfx_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionVfx = { "ExplosionVfx", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, ExplosionVfx), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionVfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionVfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "NPC/PyroxenesExplosion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenesExplosion, ExplosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyroxenesExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_DamageableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_lifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionVfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenesExplosion_Statics::NewProp_ExplosionSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyroxenesExplosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyroxenesExplosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyroxenesExplosion_Statics::ClassParams = {
		&APyroxenesExplosion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APyroxenesExplosion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APyroxenesExplosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenesExplosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyroxenesExplosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyroxenesExplosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyroxenesExplosion, 594131997);
	template<> GCAA_API UClass* StaticClass<APyroxenesExplosion>()
	{
		return APyroxenesExplosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyroxenesExplosion(Z_Construct_UClass_APyroxenesExplosion, &APyroxenesExplosion::StaticClass, TEXT("/Script/GCAA"), TEXT("APyroxenesExplosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyroxenesExplosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
