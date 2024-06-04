// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen2doParcialUSFX/Examen2doParcialUSFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExamen2doParcialUSFXGameMode() {}
// Cross Module References
	EXAMEN2DOPARCIALUSFX_API UClass* Z_Construct_UClass_AExamen2doParcialUSFXGameMode_NoRegister();
	EXAMEN2DOPARCIALUSFX_API UClass* Z_Construct_UClass_AExamen2doParcialUSFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Examen2doParcialUSFX();
// End Cross Module References
	void AExamen2doParcialUSFXGameMode::StaticRegisterNativesAExamen2doParcialUSFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExamen2doParcialUSFXGameMode_NoRegister()
	{
		return AExamen2doParcialUSFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen2doParcialUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Examen2doParcialUSFXGameMode.h" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamen2doParcialUSFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::ClassParams = {
		&AExamen2doParcialUSFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExamen2doParcialUSFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExamen2doParcialUSFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExamen2doParcialUSFXGameMode, 1041966554);
	template<> EXAMEN2DOPARCIALUSFX_API UClass* StaticClass<AExamen2doParcialUSFXGameMode>()
	{
		return AExamen2doParcialUSFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExamen2doParcialUSFXGameMode(Z_Construct_UClass_AExamen2doParcialUSFXGameMode, &AExamen2doParcialUSFXGameMode::StaticClass, TEXT("/Script/Examen2doParcialUSFX"), TEXT("AExamen2doParcialUSFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExamen2doParcialUSFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
