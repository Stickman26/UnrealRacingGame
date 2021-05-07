// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealRacing/RacerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRacerPawn() {}
// Cross Module References
	UNREALRACING_API UClass* Z_Construct_UClass_ARacerPawn_NoRegister();
	UNREALRACING_API UClass* Z_Construct_UClass_ARacerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealRacing();
// End Cross Module References
	DEFINE_FUNCTION(ARacerPawn::execShiftGears)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_gear);
		P_GET_UBOOL_REF(Z_Param_Out_canShift);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ShiftGears(Z_Param_gear,Z_Param_Out_canShift);
		P_NATIVE_END;
	}
	void ARacerPawn::StaticRegisterNativesARacerPawn()
	{
		UClass* Class = ARacerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShiftGears", &ARacerPawn::execShiftGears },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics
	{
		struct RacerPawn_eventShiftGears_Parms
		{
			int32 gear;
			bool canShift;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_gear;
		static void NewProp_canShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canShift;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_gear = { "gear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RacerPawn_eventShiftGears_Parms, gear), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_canShift_SetBit(void* Obj)
	{
		((RacerPawn_eventShiftGears_Parms*)Obj)->canShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_canShift = { "canShift", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RacerPawn_eventShiftGears_Parms), &Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_canShift_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RacerPawn_eventShiftGears_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_gear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_canShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RacerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARacerPawn, nullptr, "ShiftGears", nullptr, nullptr, sizeof(RacerPawn_eventShiftGears_Parms), Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARacerPawn_ShiftGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARacerPawn_ShiftGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARacerPawn_NoRegister()
	{
		return ARacerPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARacerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentGear;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedVals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedVals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_speedVals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARacerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealRacing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARacerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARacerPawn_ShiftGears, "ShiftGears" }, // 419357777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacerPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RacerPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RacerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacerPawn_Statics::NewProp_currentGear_MetaData[] = {
		{ "Category", "VehicleVariables" },
		{ "ModuleRelativePath", "RacerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARacerPawn_Statics::NewProp_currentGear = { "currentGear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARacerPawn, currentGear), METADATA_PARAMS(Z_Construct_UClass_ARacerPawn_Statics::NewProp_currentGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARacerPawn_Statics::NewProp_currentGear_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals_Inner = { "speedVals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals_MetaData[] = {
		{ "Category", "VehicleVariables" },
		{ "ModuleRelativePath", "RacerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals = { "speedVals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARacerPawn, speedVals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARacerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARacerPawn_Statics::NewProp_currentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARacerPawn_Statics::NewProp_speedVals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARacerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARacerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARacerPawn_Statics::ClassParams = {
		&ARacerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARacerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARacerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARacerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARacerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARacerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARacerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARacerPawn, 994122416);
	template<> UNREALRACING_API UClass* StaticClass<ARacerPawn>()
	{
		return ARacerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARacerPawn(Z_Construct_UClass_ARacerPawn, &ARacerPawn::StaticClass, TEXT("/Script/UnrealRacing"), TEXT("ARacerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARacerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
