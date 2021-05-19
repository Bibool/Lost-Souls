// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Interactables/CPickupContainerLid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPickupContainerLid() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCPickupContainerLid_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCPickupContainerLid();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCPickupContainerLid::execPerformLidMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformLidMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPickupContainerLid::execFinishFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPickupContainerLid::execHandleRotationProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRotationProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	void UCPickupContainerLid::StaticRegisterNativesUCPickupContainerLid()
	{
		UClass* Class = UCPickupContainerLid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishFunction", &UCPickupContainerLid::execFinishFunction },
			{ "HandleRotationProgress", &UCPickupContainerLid::execHandleRotationProgress },
			{ "PerformLidMovement", &UCPickupContainerLid::execPerformLidMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPickupContainerLid, nullptr, "FinishFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPickupContainerLid_FinishFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPickupContainerLid_FinishFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics
	{
		struct CPickupContainerLid_eventHandleRotationProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPickupContainerLid_eventHandleRotationProgress_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//The function that will handle every tick of the curve.\n" },
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
		{ "ToolTip", "The function that will handle every tick of the curve." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPickupContainerLid, nullptr, "HandleRotationProgress", nullptr, nullptr, sizeof(CPickupContainerLid_eventHandleRotationProgress_Parms), Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPickupContainerLid, nullptr, "PerformLidMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPickupContainerLid_NoRegister()
	{
		return UCPickupContainerLid::StaticClass();
	}
	struct Z_Construct_UClass_UCPickupContainerLid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloatLidOpening_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloatLidOpening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPickupContainerLid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPickupContainerLid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPickupContainerLid_FinishFunction, "FinishFunction" }, // 3928272458
		{ &Z_Construct_UFunction_UCPickupContainerLid_HandleRotationProgress, "HandleRotationProgress" }, // 2986972273
		{ &Z_Construct_UFunction_UCPickupContainerLid_PerformLidMovement, "PerformLidMovement" }, // 3582195597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPickupContainerLid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interactables/CPickupContainerLid.h" },
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_CurveFloatLidOpening_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "//Curve float reference for the rotation.\n" },
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
		{ "ToolTip", "Curve float reference for the rotation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_CurveFloatLidOpening = { "CurveFloatLidOpening", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPickupContainerLid, CurveFloatLidOpening), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_CurveFloatLidOpening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_CurveFloatLidOpening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_RotationAmount_MetaData[] = {
		{ "Category", "Configure" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//Amount of rotation to perform for the CurveFloatYaw\n" },
		{ "ModuleRelativePath", "Interactables/CPickupContainerLid.h" },
		{ "ToolTip", "Amount of rotation to perform for the CurveFloatYaw" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPickupContainerLid, RotationAmount), METADATA_PARAMS(Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_RotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_RotationAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPickupContainerLid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_CurveFloatLidOpening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPickupContainerLid_Statics::NewProp_RotationAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPickupContainerLid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPickupContainerLid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPickupContainerLid_Statics::ClassParams = {
		&UCPickupContainerLid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCPickupContainerLid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPickupContainerLid_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPickupContainerLid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPickupContainerLid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPickupContainerLid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPickupContainerLid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPickupContainerLid, 2875538059);
	template<> GCAA_API UClass* StaticClass<UCPickupContainerLid>()
	{
		return UCPickupContainerLid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPickupContainerLid(Z_Construct_UClass_UCPickupContainerLid, &UCPickupContainerLid::StaticClass, TEXT("/Script/GCAA"), TEXT("UCPickupContainerLid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPickupContainerLid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
