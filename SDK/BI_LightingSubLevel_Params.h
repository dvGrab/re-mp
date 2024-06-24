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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateCCTV
	 */
	struct UBI_LightingSubLevel_C_UpdateCCTV_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateAdrenaline
	 */
	struct UBI_LightingSubLevel_C_UpdateAdrenaline_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLocationEffects
	 */
	struct UBI_LightingSubLevel_C_UpdateLocationEffects_Params
	{
	public:
		float                                                      Underwater;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Tunnel;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.SetupScalability
	 */
	struct UBI_LightingSubLevel_C_SetupScalability_Params
	{
	public:
		class AGTAScalability*                                     Scalability;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherImpact
	 */
	struct UBI_LightingSubLevel_C_UpdateWeatherImpact_Params
	{
	public:
		float                                                      RoadWetness;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaveAmount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateSkyColors
	 */
	struct UBI_LightingSubLevel_C_UpdateSkyColors_Params
	{
	public:
		struct FColor                                              skyTop;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              skyBottom;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLightColors
	 */
	struct UBI_LightingSubLevel_C_UpdateLightColors_Params
	{
	public:
		struct FColor                                              directional;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              ambient;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.Update Environment Effects
	 */
	struct UBI_LightingSubLevel_C_Update_Environment_Effects_Params
	{
	public:
		float                                                      Foggyness;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Heat_Haze;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Lightning;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RIOT;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherEffects
	 */
	struct UBI_LightingSubLevel_C_UpdateWeatherEffects_Params
	{
	public:
		float                                                      Cloud;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rain;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Sandstorm;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WindDir;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WindPower;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExtraSunny;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateTimeOfDay
	 */
	struct UBI_LightingSubLevel_C_UpdateTimeOfDay_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
