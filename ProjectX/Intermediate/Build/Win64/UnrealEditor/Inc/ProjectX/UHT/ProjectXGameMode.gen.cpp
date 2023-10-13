// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectX/ProjectXGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectXGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECTX_API UClass* Z_Construct_UClass_AProjectXGameMode();
	PROJECTX_API UClass* Z_Construct_UClass_AProjectXGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectX();
// End Cross Module References
	void AProjectXGameMode::StaticRegisterNativesAProjectXGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectXGameMode);
	UClass* Z_Construct_UClass_AProjectXGameMode_NoRegister()
	{
		return AProjectXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectXGameMode.h" },
		{ "ModuleRelativePath", "ProjectXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectXGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectXGameMode_Statics::ClassParams = {
		&AProjectXGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectXGameMode()
	{
		if (!Z_Registration_Info_UClass_AProjectXGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectXGameMode.OuterSingleton, Z_Construct_UClass_AProjectXGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectXGameMode.OuterSingleton;
	}
	template<> PROJECTX_API UClass* StaticClass<AProjectXGameMode>()
	{
		return AProjectXGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectXGameMode);
	AProjectXGameMode::~AProjectXGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Tarkan_Documents_GitHub_ProjectX_ProjectX_Source_ProjectX_ProjectXGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tarkan_Documents_GitHub_ProjectX_ProjectX_Source_ProjectX_ProjectXGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectXGameMode, AProjectXGameMode::StaticClass, TEXT("AProjectXGameMode"), &Z_Registration_Info_UClass_AProjectXGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectXGameMode), 605327798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tarkan_Documents_GitHub_ProjectX_ProjectX_Source_ProjectX_ProjectXGameMode_h_889031602(TEXT("/Script/ProjectX"),
		Z_CompiledInDeferFile_FID_Users_Tarkan_Documents_GitHub_ProjectX_ProjectX_Source_ProjectX_ProjectXGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tarkan_Documents_GitHub_ProjectX_ProjectX_Source_ProjectX_ProjectXGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
