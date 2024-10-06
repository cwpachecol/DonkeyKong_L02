// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroElectrico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroElectrico() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroElectrico_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroElectrico();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroElectrico::StaticRegisterNativesAMuroElectrico()
	{
	}
	UClass* Z_Construct_UClass_AMuroElectrico_NoRegister()
	{
		return AMuroElectrico::StaticClass();
	}
	struct Z_Construct_UClass_AMuroElectrico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroElectrico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroElectrico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MuroElectrico.h" },
		{ "ModuleRelativePath", "MuroElectrico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroElectrico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroElectrico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroElectrico_Statics::ClassParams = {
		&AMuroElectrico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroElectrico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroElectrico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroElectrico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroElectrico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroElectrico, 102257723);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroElectrico>()
	{
		return AMuroElectrico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroElectrico(Z_Construct_UClass_AMuroElectrico, &AMuroElectrico::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroElectrico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroElectrico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
