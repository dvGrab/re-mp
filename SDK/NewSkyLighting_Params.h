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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateWind
	 */
	struct ANewSkyLighting_C_UpdateWind_Params
	{	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.Update Post Process
	 */
	struct ANewSkyLighting_C_Update_Post_Process_Params
	{	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateLightColors
	 */
	struct ANewSkyLighting_C_UpdateLightColors_Params
	{
	public:
		struct FColor                                              directional;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              ambient;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateSkyColors
	 */
	struct ANewSkyLighting_C_UpdateSkyColors_Params
	{
	public:
		struct FColor                                              skyTop;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              skyBottom;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateCCTV
	 */
	struct ANewSkyLighting_C_UpdateCCTV_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateTimeOfDay
	 */
	struct ANewSkyLighting_C_UpdateTimeOfDay_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateWeatherEffects
	 */
	struct ANewSkyLighting_C_UpdateWeatherEffects_Params
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
	 * Function NewSkyLighting.NewSkyLighting_C.Update Environment Effects
	 */
	struct ANewSkyLighting_C_Update_Environment_Effects_Params
	{
	public:
		float                                                      Foggyness;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Heat_Haze;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Lightning;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RIOT;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateWeatherImpact
	 */
	struct ANewSkyLighting_C_UpdateWeatherImpact_Params
	{
	public:
		float                                                      RoadWetness;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaveAmount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.SetupScalability
	 */
	struct ANewSkyLighting_C_SetupScalability_Params
	{
	public:
		class AGTAScalability*                                     Scalability;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateLocationEffects
	 */
	struct ANewSkyLighting_C_UpdateLocationEffects_Params
	{
	public:
		float                                                      Underwater;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Tunnel;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.UpdateAdrenaline
	 */
	struct ANewSkyLighting_C_UpdateAdrenaline_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewSkyLighting.NewSkyLighting_C.ExecuteUbergraph_NewSkyLighting
	 */
	struct ANewSkyLighting_C_ExecuteUbergraph_NewSkyLighting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
