#pragma once

/**
 * Name: GTA-SA-DEF
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
	 * BlueprintGeneratedClass BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C
	 * Size -> 0x0024 (FullSize[0x0254] - InheritedSize[0x0230])
	 */
	class ABP_VolumetricCloud_Base_C : public AGTAVolumetricCloud
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            DynMat;                                                  // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentIntensityScale;                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentQualityLevel;                                     // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredCloudInterp;                                      // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentCloudInterp;                                      // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RayleighWeatherScale;                                    // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateCloudInterp();
		void Flush();
		void UpdateQualityLevel(int32_t CurrentQualityLevel);
		void UserConstructionScript();
		void SetQualityLevel(int32_t quality);
		void SetColor(const struct FLinearColor& Color, float Intensity, float raleigh, class USkyAtmosphereComponent* AtmosphereComponent);
		void SetExtinction(const struct FLinearColor& Color);
		void SetSkyParams(float SunIntensity, float MoonIntensity);
		void UpdateCloudiness(float SunAmt, float CloudAmt);
		void ReceiveTick(float DeltaSeconds);
		void SetEmission(const struct FLinearColor& Color);
		void ExecuteUbergraph_BP_VolumetricCloud_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
