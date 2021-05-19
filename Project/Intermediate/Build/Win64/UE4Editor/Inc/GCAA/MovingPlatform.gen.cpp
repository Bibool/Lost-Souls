// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/DynamicEnvironment/MovingPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AMovingPlatform();
	GCAA_API UClass* Z_Construct_UClass_AEnvironmentItem();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMovingPlatform::execPerformOneMovementAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformOneMovementAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingPlatform::execHandleRotationProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRotationProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMovingPlatform::execHandleMovementProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMovementProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
		UClass* Class = AMovingPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleMovementProgress", &AMovingPlatform::execHandleMovementProgress },
			{ "HandleRotationProgress", &AMovingPlatform::execHandleRotationProgress },
			{ "PerformOneMovementAction", &AMovingPlatform::execPerformOneMovementAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics
	{
		struct MovingPlatform_eventHandleMovementProgress_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingPlatform_eventHandleMovementProgress_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//The function that will handle every tick of the curve.\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "The function that will handle every tick of the curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "HandleMovementProgress", nullptr, nullptr, sizeof(MovingPlatform_eventHandleMovementProgress_Parms), Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics
	{
		struct MovingPlatform_eventHandleRotationProgress_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingPlatform_eventHandleRotationProgress_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//The function that will handle every tick of the curve.\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "The function that will handle every tick of the curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "HandleRotationProgress", nullptr, nullptr, sizeof(MovingPlatform_eventHandleRotationProgress_Parms), Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "PerformOneMovementAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloatYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloatYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMovement_MetaData[];
#endif
		static void NewProp_VerticalMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VerticalMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atStart_MetaData[];
#endif
		static void NewProp_atStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_atStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingPlatformSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingPlatformSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnvironmentItem,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform_HandleMovementProgress, "HandleMovementProgress" }, // 3660232455
		{ &Z_Construct_UFunction_AMovingPlatform_HandleRotationProgress, "HandleRotationProgress" }, // 1840917799
		{ &Z_Construct_UFunction_AMovingPlatform_PerformOneMovementAction, "PerformOneMovementAction" }, // 2749835826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "//Curve used to provide animation on the platforms movement.\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Curve used to provide animation on the platforms movement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementDistance_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "//Distances for the plaform to move in the three x,y,z axis.\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Distances for the plaform to move in the three x,y,z axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementDistance = { "MovementDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MovementDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloatYaw_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "//Curve float reference for the rotation.\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Curve float reference for the rotation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloatYaw = { "CurveFloatYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, CurveFloatYaw), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloatYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloatYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationAmount_MetaData[] = {
		{ "Category", "Configure" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//Amount of rotation to perform for the CurveFloatYaw\n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Amount of rotation to perform for the CurveFloatYaw" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, RotationAmount), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->VerticalMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement = { "VerticalMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "/*Is the plaform at its starting position - can be read but not editable in blueprints*/" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Is the plaform at its starting position - can be read but not editable in blueprints" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->atStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart = { "atStart", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovingPlatformSound_MetaData[] = {
		{ "Category", "sound" },
		{ "Comment", "//////////////////////////////////////////////////\n// Sound\n// MovingPlatform Sound \n" },
		{ "ModuleRelativePath", "DynamicEnvironment/MovingPlatform.h" },
		{ "ToolTip", "Sound\nMovingPlatform Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovingPlatformSound = { "MovingPlatformSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MovingPlatformSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovingPlatformSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovingPlatformSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_CurveFloatYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_VerticalMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_atStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovingPlatformSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingPlatform, 2248338185);
	template<> GCAA_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatform(Z_Construct_UClass_AMovingPlatform, &AMovingPlatform::StaticClass, TEXT("/Script/GCAA"), TEXT("AMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
