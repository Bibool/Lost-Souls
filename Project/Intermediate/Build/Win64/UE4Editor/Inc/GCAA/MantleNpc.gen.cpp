// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/MantleNpc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMantleNpc() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AMantleNpc_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AMantleNpc();
	GCAA_API UClass* Z_Construct_UClass_AMovingNpc();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_AAIBullet_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_APyroxenesExplosion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMantleNpc::execOnOverLapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverLapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMantleNpc::execOnOverLapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMantleNpc::execResetDodge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDodge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMantleNpc::execTimerFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerFunction();
		P_NATIVE_END;
	}
	void AMantleNpc::StaticRegisterNativesAMantleNpc()
	{
		UClass* Class = AMantleNpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverLapBegin", &AMantleNpc::execOnOverLapBegin },
			{ "OnOverLapEnd", &AMantleNpc::execOnOverLapEnd },
			{ "ResetDodge", &AMantleNpc::execResetDodge },
			{ "TimerFunction", &AMantleNpc::execTimerFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics
	{
		struct MantleNpc_eventOnOverLapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MantleNpc_eventOnOverLapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MantleNpc_eventOnOverLapBegin_Parms), &Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMantleNpc, nullptr, "OnOverLapBegin", nullptr, nullptr, sizeof(MantleNpc_eventOnOverLapBegin_Parms), Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMantleNpc_OnOverLapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMantleNpc_OnOverLapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics
	{
		struct MantleNpc_eventOnOverLapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MantleNpc_eventOnOverLapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMantleNpc, nullptr, "OnOverLapEnd", nullptr, nullptr, sizeof(MantleNpc_eventOnOverLapEnd_Parms), Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMantleNpc_OnOverLapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMantleNpc_OnOverLapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMantleNpc, nullptr, "ResetDodge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMantleNpc_ResetDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMantleNpc_ResetDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMantleNpc, nullptr, "TimerFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMantleNpc_TimerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMantleNpc_TimerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMantleNpc_NoRegister()
	{
		return AMantleNpc::StaticClass();
	}
	struct Z_Construct_UClass_AMantleNpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_numberOfShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_numberOfShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnusedHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDodgeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDodgeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDodgeCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDodgeCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDodge_MetaData[];
#endif
		static void NewProp_bCanDodge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDodge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDodgeStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDodgeStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_traceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMantleNpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMovingNpc,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMantleNpc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMantleNpc_OnOverLapBegin, "OnOverLapBegin" }, // 283479174
		{ &Z_Construct_UFunction_AMantleNpc_OnOverLapEnd, "OnOverLapEnd" }, // 1369994899
		{ &Z_Construct_UFunction_AMantleNpc_ResetDodge, "ResetDodge" }, // 1121160981
		{ &Z_Construct_UFunction_AMantleNpc_TimerFunction, "TimerFunction" }, // 956403294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/MantleNpc.h" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_m_numberOfShots_MetaData[] = {
		{ "Category", "AI | Shooting" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_m_numberOfShots = { "m_numberOfShots", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, m_numberOfShots), METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_m_numberOfShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_m_numberOfShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_BulletBP_MetaData[] = {
		{ "Category", "AI | Shooting" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_BulletBP = { "BulletBP", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, BulletBP), Z_Construct_UClass_AAIBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_BulletBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_BulletBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_UnusedHandle_MetaData[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_UnusedHandle = { "UnusedHandle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, UnusedHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_UnusedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_UnusedHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeDistance_MetaData[] = {
		{ "Category", "AI | Shooting" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeDistance = { "fDodgeDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, fDodgeDistance), METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeCooldown_MetaData[] = {
		{ "Category", "AI | Shooting" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeCooldown = { "fDodgeCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, fDodgeCooldown), METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShootSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Shooting" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShootSound = { "ShootSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, ShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShootSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge_MetaData[] = {
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	void Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge_SetBit(void* Obj)
	{
		((AMantleNpc*)Obj)->bCanDodge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge = { "bCanDodge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMantleNpc), &Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeStop_MetaData[] = {
		{ "Category", "MantleNpc" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeStop = { "fDodgeStop", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, fDodgeStop), METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "AI | Combat" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, Explosion), Z_Construct_UClass_APyroxenesExplosion_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_Explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_traceDistance_MetaData[] = {
		{ "Category", "AI | Charge" },
		{ "Comment", "// the explosion which will be spawned as this npc should blow up on contact with the player\n" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
		{ "ToolTip", "the explosion which will be spawned as this npc should blow up on contact with the player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_traceDistance = { "traceDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, traceDistance), METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_traceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_traceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeCollision_MetaData[] = {
		{ "Category", "AI | Charge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeCollision = { "ChargeCollision", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, ChargeCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShieldCollider_MetaData[] = {
		{ "Category", "AI | Charge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShieldCollider = { "ShieldCollider", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, ShieldCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShieldCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShieldCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Charge" },
		{ "ModuleRelativePath", "NPC/MantleNpc.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeSound = { "ChargeSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMantleNpc, ChargeSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMantleNpc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_m_numberOfShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_BulletBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_UnusedHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShootSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_bCanDodge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_fDodgeStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_traceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_ShieldCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMantleNpc_Statics::NewProp_ChargeSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMantleNpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMantleNpc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMantleNpc_Statics::ClassParams = {
		&AMantleNpc::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMantleNpc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMantleNpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMantleNpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMantleNpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMantleNpc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMantleNpc, 1694382058);
	template<> GCAA_API UClass* StaticClass<AMantleNpc>()
	{
		return AMantleNpc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMantleNpc(Z_Construct_UClass_AMantleNpc, &AMantleNpc::StaticClass, TEXT("/Script/GCAA"), TEXT("AMantleNpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMantleNpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
