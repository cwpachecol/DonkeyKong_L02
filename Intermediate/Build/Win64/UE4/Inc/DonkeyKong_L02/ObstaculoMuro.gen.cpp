// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/ObstaculoMuro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoMuro() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AObstaculoMuro_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AObstaculoMuro();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObstaculoMuro::StaticRegisterNativesAObstaculoMuro()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoMuro_NoRegister()
	{
		return AObstaculoMuro::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoMuro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muroMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muroMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoMuro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMuro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoMuro.h" },
		{ "ModuleRelativePath", "ObstaculoMuro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMuro_Statics::NewProp_muroMesh_MetaData[] = {
		{ "Category", "ObstaculoMuro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObstaculoMuro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculoMuro_Statics::NewProp_muroMesh = { "muroMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoMuro, muroMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculoMuro_Statics::NewProp_muroMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMuro_Statics::NewProp_muroMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoMuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoMuro_Statics::NewProp_muroMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoMuro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoMuro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoMuro_Statics::ClassParams = {
		&AObstaculoMuro::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculoMuro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMuro_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoMuro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMuro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoMuro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoMuro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoMuro, 2226381011);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AObstaculoMuro>()
	{
		return AObstaculoMuro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoMuro(Z_Construct_UClass_AObstaculoMuro, &AObstaculoMuro::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AObstaculoMuro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoMuro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
