﻿#pragma once

/**
 * Name: GTASA
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DLSSBlueprint.DLSSLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDLSSLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDLSSSharpness(float Sharpness);
		void STATIC_SetDLSSMode(EUDLSSMode DLSSMode);
		EUDLSSSupport STATIC_QueryDLSSSupport();
		bool STATIC_IsDLSSSupported();
		bool STATIC_IsDLSSModeSupported(EUDLSSMode DLSSMode);
		TArray<EUDLSSMode> STATIC_GetSupportedDLSSModes();
		float STATIC_GetDLSSSharpness();
		void STATIC_GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
		void STATIC_GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
		EUDLSSMode STATIC_GetDLSSMode();
		void STATIC_GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor);
		EUDLSSMode STATIC_GetDefaultDLSSMode();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
