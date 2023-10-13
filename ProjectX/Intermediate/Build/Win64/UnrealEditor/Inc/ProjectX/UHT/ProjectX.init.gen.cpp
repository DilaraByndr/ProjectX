// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectX_init() {}
	PROJECTX_API UFunction* Z_Construct_UDelegateFunction_ProjectX_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectX;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectX()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectX.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectX_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectX",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56F07B81,
				0x52A946B1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectX.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectX.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectX(Z_Construct_UPackage__Script_ProjectX, TEXT("/Script/ProjectX"), Z_Registration_Info_UPackage__Script_ProjectX, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56F07B81, 0x52A946B1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
