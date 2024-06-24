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
	 * BlueprintGeneratedClass NewSkyLighting.NewSkyLighting_C
	 * Size -> 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
	 */
	class ANewSkyLighting_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HeatHazeAmount;                                          // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SVQS[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   PostHeatHaze;                                            // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WindPower;                                               // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WindDir;                                                 // 0x0244(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   PostAdrenaline;                                          // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ExteriorPostProcess_C*                           PostProcessVolume_2_ExecuteUbergraph_NewSkyLighting_RefProperty; // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_GTA_ProceduralSky_C*                             ProceduralSky_ExecuteUbergraph_NewSkyLighting_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Exterior_DL_Sun_C*                               Sun_ExecuteUbergraph_NewSkyLighting_RefProperty;         // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Exterior_DL_Moon_C*                              Moon_ExecuteUbergraph_NewSkyLighting_RefProperty;        // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Exterior_Skylight_C*                             SkyLight_1_ExecuteUbergraph_NewSkyLighting_RefProperty;  // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_ExteriorPostProcess_C*                           PostProcessVolume_2_EdGraph_0_RefProperty;               // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void UpdateWind();
		void Update_Post_Process();
		void UpdateLightColors(const struct FColor& directional, const struct FColor& ambient);
		void UpdateSkyColors(const struct FColor& skyTop, const struct FColor& skyBottom);
		void UpdateCCTV(int32_t Type);
		void UpdateTimeOfDay(float Time);
		void UpdateWeatherEffects(float Cloud, float Rain, float Sandstorm, const struct FVector& WindDir, float WindPower, float ExtraSunny);
		void Update_Environment_Effects(float Foggyness, float Heat_Haze, float Lightning, float RIOT);
		void UpdateWeatherImpact(float RoadWetness, float WaveAmount);
		void SetupScalability(class AGTAScalability* Scalability);
		void UpdateLocationEffects(float Underwater, float Tunnel);
		void UpdateAdrenaline(float Amount);
		void ExecuteUbergraph_NewSkyLighting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
