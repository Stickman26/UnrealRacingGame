// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealRacing/CustomMathOps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMathOps() {}
// Cross Module References
	UNREALRACING_API UClass* Z_Construct_UClass_UCustomMathOps_NoRegister();
	UNREALRACING_API UClass* Z_Construct_UClass_UCustomMathOps();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealRacing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UCustomMathOps::execAddToVector)
	{
		P_GET_STRUCT(FVector,Z_Param_vec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCustomMathOps::AddToVector(Z_Param_vec,Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	void UCustomMathOps::StaticRegisterNativesUCustomMathOps()
	{
		UClass* Class = UCustomMathOps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToVector", &UCustomMathOps::execAddToVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics
	{
		struct CustomMathOps_eventAddToVector_Parms
		{
			FVector vec;
			float x;
			float y;
			float z;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMathOps_eventAddToVector_Parms, vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMathOps_eventAddToVector_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMathOps_eventAddToVector_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMathOps_eventAddToVector_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMathOps_eventAddToVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_vec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomMathOps.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMathOps, nullptr, "AddToVector", nullptr, nullptr, sizeof(CustomMathOps_eventAddToVector_Parms), Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMathOps_AddToVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMathOps_AddToVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomMathOps_NoRegister()
	{
		return UCustomMathOps::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMathOps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMathOps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealRacing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomMathOps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMathOps_AddToVector, "AddToVector" }, // 835594465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMathOps_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomMathOps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CustomMathOps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMathOps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMathOps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomMathOps_Statics::ClassParams = {
		&UCustomMathOps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMathOps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMathOps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMathOps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomMathOps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomMathOps, 1371643750);
	template<> UNREALRACING_API UClass* StaticClass<UCustomMathOps>()
	{
		return UCustomMathOps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomMathOps(Z_Construct_UClass_UCustomMathOps, &UCustomMathOps::StaticClass, TEXT("/Script/UnrealRacing"), TEXT("UCustomMathOps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMathOps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
