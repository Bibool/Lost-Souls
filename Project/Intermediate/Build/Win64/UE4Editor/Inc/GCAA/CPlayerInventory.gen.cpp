// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/CPlayerInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayerInventory() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCPlayerInventory_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCPlayerInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ACPickup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCPlayerInventory::execCheckForValidDropDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_cDropVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckForValidDropDirection(Z_Param_Out_cDropVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerInventory::execGetPlayerInventorySize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerInventorySize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerInventory::execGetPlayerInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACPickup*>*)Z_Param__Result=P_THIS->GetPlayerInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerInventory::execSearchForItemInInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SearchForItemInInventory(Z_Param_ToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerInventory::execRemoveLastItemCollectedFromInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLastItemCollectedFromInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPlayerInventory::execAddItemToInventory)
	{
		P_GET_OBJECT(ACPickup,Z_Param_ToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory(Z_Param_ToAdd);
		P_NATIVE_END;
	}
	void UCPlayerInventory::StaticRegisterNativesUCPlayerInventory()
	{
		UClass* Class = UCPlayerInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &UCPlayerInventory::execAddItemToInventory },
			{ "CheckForValidDropDirection", &UCPlayerInventory::execCheckForValidDropDirection },
			{ "GetPlayerInventory", &UCPlayerInventory::execGetPlayerInventory },
			{ "GetPlayerInventorySize", &UCPlayerInventory::execGetPlayerInventorySize },
			{ "RemoveLastItemCollectedFromInventory", &UCPlayerInventory::execRemoveLastItemCollectedFromInventory },
			{ "SearchForItemInInventory", &UCPlayerInventory::execSearchForItemInInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics
	{
		struct CPlayerInventory_eventAddItemToInventory_Parms
		{
			ACPickup* ToAdd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::NewProp_ToAdd = { "ToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerInventory_eventAddItemToInventory_Parms, ToAdd), Z_Construct_UClass_ACPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::NewProp_ToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Adds the Pikcup item 'ToAdd' to the inventory.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "Adds the Pikcup item 'ToAdd' to the inventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "AddItemToInventory", nullptr, nullptr, sizeof(CPlayerInventory_eventAddItemToInventory_Parms), Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics
	{
		struct CPlayerInventory_eventCheckForValidDropDirection_Parms
		{
			FVector cDropVector;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cDropVector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_cDropVector = { "cDropVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerInventory_eventCheckForValidDropDirection_Parms, cDropVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPlayerInventory_eventCheckForValidDropDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPlayerInventory_eventCheckForValidDropDirection_Parms), &Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_cDropVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "CheckForValidDropDirection", nullptr, nullptr, sizeof(CPlayerInventory_eventCheckForValidDropDirection_Parms), Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics
	{
		struct CPlayerInventory_eventGetPlayerInventory_Parms
		{
			TArray<ACPickup*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerInventory_eventGetPlayerInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Return a read only reference to the Player Inventory - eg. for UI to read.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "Return a read only reference to the Player Inventory - eg. for UI to read." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "GetPlayerInventory", nullptr, nullptr, sizeof(CPlayerInventory_eventGetPlayerInventory_Parms), Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics
	{
		struct CPlayerInventory_eventGetPlayerInventorySize_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerInventory_eventGetPlayerInventorySize_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "GetPlayerInventorySize", nullptr, nullptr, sizeof(CPlayerInventory_eventGetPlayerInventorySize_Parms), Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Removes the last item added to the player inventory.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "Removes the last item added to the player inventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "RemoveLastItemCollectedFromInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics
	{
		struct CPlayerInventory_eventSearchForItemInInventory_Parms
		{
			FName ToFind;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToFind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ToFind = { "ToFind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayerInventory_eventSearchForItemInInventory_Parms, ToFind), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPlayerInventory_eventSearchForItemInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPlayerInventory_eventSearchForItemInInventory_Parms), &Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns a boolean result if the pickup named 'ToFind' is stored by the PlayerInventory.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "Returns a boolean result if the pickup named 'ToFind' is stored by the PlayerInventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPlayerInventory, nullptr, "SearchForItemInInventory", nullptr, nullptr, sizeof(CPlayerInventory_eventSearchForItemInInventory_Parms), Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPlayerInventory_NoRegister()
	{
		return UCPlayerInventory::StaticClass();
	}
	struct Z_Construct_UClass_UCPlayerInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iMaxNumberOfItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxNumberOfItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropCheckRayCastLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropCheckRayCastLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropCheckRayCastOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropCheckRayCastOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropCheckHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropCheckHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropStartAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropStartAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropAngleIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropAngleIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDropDistanceModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDropDistanceModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_MessageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UI_MessageToPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPlayerInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aPlayerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_aPlayerInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPlayerInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPlayerInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPlayerInventory_AddItemToInventory, "AddItemToInventory" }, // 2643274776
		{ &Z_Construct_UFunction_UCPlayerInventory_CheckForValidDropDirection, "CheckForValidDropDirection" }, // 3878703295
		{ &Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventory, "GetPlayerInventory" }, // 3895088312
		{ &Z_Construct_UFunction_UCPlayerInventory_GetPlayerInventorySize, "GetPlayerInventorySize" }, // 2967007140
		{ &Z_Construct_UFunction_UCPlayerInventory_RemoveLastItemCollectedFromInventory, "RemoveLastItemCollectedFromInventory" }, // 3018324013
		{ &Z_Construct_UFunction_UCPlayerInventory_SearchForItemInInventory, "SearchForItemInInventory" }, // 2008344019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FUpdateInventoryDelegate, const TArray<ACPickup*>&, InventoryItems );\n" },
		{ "IncludePath", "CPlayerInventory.h" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FUpdateInventoryDelegate, const TArray<ACPickup*>&, InventoryItems );" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_iMaxNumberOfItems_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "40.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The maximum number of items the Player Inventory can hold.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The maximum number of items the Player Inventory can hold." },
		{ "UIMax", "40" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_iMaxNumberOfItems = { "iMaxNumberOfItems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, iMaxNumberOfItems), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_iMaxNumberOfItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_iMaxNumberOfItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastLength_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The distance from the player to the end of the ray cast used to drop items.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The distance from the player to the end of the ray cast used to drop items." },
		{ "UIMax", "400" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastLength = { "fDropCheckRayCastLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropCheckRayCastLength), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastOffset_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The offset from the player to the start of the ray cast used to drop items.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The offset from the player to the start of the ray cast used to drop items." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastOffset = { "fDropCheckRayCastOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropCheckRayCastOffset), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckHeightOffset_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The offset from the players position to where the item is requried to be dropped.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The offset from the players position to where the item is requried to be dropped." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckHeightOffset = { "fDropCheckHeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropCheckHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropStartAngle_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The angle from the players forward direction vector to the first ray cast direction for dropping items.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The angle from the players forward direction vector to the first ray cast direction for dropping items." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropStartAngle = { "fDropStartAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropStartAngle), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropStartAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropAngleIncrement_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The angle to increment by after the first ray cast has been made fro dropping items.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "The angle to increment by after the first ray cast has been made fro dropping items." },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropAngleIncrement = { "fDropAngleIncrement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropAngleIncrement), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropAngleIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropAngleIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropDistanceModifier_MetaData[] = {
		{ "Category", "DropConfigure" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A modifier value to determine the drop position from the player that the item is dropped at.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "A modifier value to determine the drop position from the player that the item is dropped at." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropDistanceModifier = { "fDropDistanceModifier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, fDropDistanceModifier), METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropDistanceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropDistanceModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_UI_MessageToPlayer_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_UI_MessageToPlayer = { "UI_MessageToPlayer", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, UI_MessageToPlayer), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_UI_MessageToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_UI_MessageToPlayer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory_Inner = { "aPlayerInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory_MetaData[] = {
		{ "Comment", "// this should be private.\n" },
		{ "ModuleRelativePath", "CPlayerInventory.h" },
		{ "ToolTip", "this should be private." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory = { "aPlayerInventory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPlayerInventory, aPlayerInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPlayerInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_iMaxNumberOfItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckRayCastOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropCheckHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropStartAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropAngleIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_fDropDistanceModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_UI_MessageToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPlayerInventory_Statics::NewProp_aPlayerInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPlayerInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPlayerInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPlayerInventory_Statics::ClassParams = {
		&UCPlayerInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCPlayerInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPlayerInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPlayerInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPlayerInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPlayerInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPlayerInventory, 3861689842);
	template<> GCAA_API UClass* StaticClass<UCPlayerInventory>()
	{
		return UCPlayerInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPlayerInventory(Z_Construct_UClass_UCPlayerInventory, &UCPlayerInventory::StaticClass, TEXT("/Script/GCAA"), TEXT("UCPlayerInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPlayerInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
