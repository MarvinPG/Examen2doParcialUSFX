// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen2doParcialUSFX/Examen2doParcialUSFXPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExamen2doParcialUSFXPawn() {}
// Cross Module References
	EXAMEN2DOPARCIALUSFX_API UClass* Z_Construct_UClass_AExamen2doParcialUSFXPawn_NoRegister();
	EXAMEN2DOPARCIALUSFX_API UClass* Z_Construct_UClass_AExamen2doParcialUSFXPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Examen2doParcialUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AExamen2doParcialUSFXPawn::StaticRegisterNativesAExamen2doParcialUSFXPawn()
	{
	}
	UClass* Z_Construct_UClass_AExamen2doParcialUSFXPawn_NoRegister()
	{
		return AExamen2doParcialUSFXPawn::StaticClass();
	}
	struct Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen2doParcialUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Examen2doParcialUSFXPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/* The mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_ShipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* How fast the weapon will fire */" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Examen2doParcialUSFXPawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExamen2doParcialUSFXPawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_ShipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::NewProp_FireSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamen2doParcialUSFXPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::ClassParams = {
		&AExamen2doParcialUSFXPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExamen2doParcialUSFXPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExamen2doParcialUSFXPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExamen2doParcialUSFXPawn, 357804544);
	template<> EXAMEN2DOPARCIALUSFX_API UClass* StaticClass<AExamen2doParcialUSFXPawn>()
	{
		return AExamen2doParcialUSFXPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExamen2doParcialUSFXPawn(Z_Construct_UClass_AExamen2doParcialUSFXPawn, &AExamen2doParcialUSFXPawn::StaticClass, TEXT("/Script/Examen2doParcialUSFX"), TEXT("AExamen2doParcialUSFXPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExamen2doParcialUSFXPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
