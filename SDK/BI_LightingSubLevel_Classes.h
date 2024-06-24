#pragma once

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
	 * BlueprintGeneratedClass BI_LightingSubLevel.BI_LightingSubLevel_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_LightingSubLevel_C : public UInterface
	{
	public:
		void UpdateCCTV(int32_t Type);
		void UpdateAdrenaline(float Amount);
		void UpdateLocationEffects(float Underwater, float Tunnel);
		void SetupScalability(class AGTAScalability* Scalability);
		void UpdateWeatherImpact(float RoadWetness, float WaveAmount);
		void UpdateSkyColors(const struct FColor& skyTop, const struct FColor& skyBottom);
		void UpdateLightColors(const struct FColor& directional, const struct FColor& ambient);
		void Update_Environment_Effects(float Foggyness, float Heat_Haze, float Lightning, float RIOT);
		void UpdateWeatherEffects(float Cloud, float Rain, float Sandstorm, const struct FVector& WindDir, float WindPower, float ExtraSunny);
		void UpdateTimeOfDay(float Time);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
