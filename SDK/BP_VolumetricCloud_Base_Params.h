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
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudInterp
	 */
	struct ABP_VolumetricCloud_Base_C_UpdateCloudInterp_Params
	{	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.Flush
	 */
	struct ABP_VolumetricCloud_Base_C_Flush_Params
	{	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateQualityLevel
	 */
	struct ABP_VolumetricCloud_Base_C_UpdateQualityLevel_Params
	{
	public:
		int32_t                                                    CurrentQualityLevel;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UserConstructionScript
	 */
	struct ABP_VolumetricCloud_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetQualityLevel
	 */
	struct ABP_VolumetricCloud_Base_C_SetQualityLevel_Params
	{
	public:
		int32_t                                                    quality;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetColor
	 */
	struct ABP_VolumetricCloud_Base_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Intensity;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      raleigh;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkyAtmosphereComponent*                             AtmosphereComponent;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetExtinction
	 */
	struct ABP_VolumetricCloud_Base_C_SetExtinction_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetSkyParams
	 */
	struct ABP_VolumetricCloud_Base_C_SetSkyParams_Params
	{
	public:
		float                                                      SunIntensity;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoonIntensity;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudiness
	 */
	struct ABP_VolumetricCloud_Base_C_UpdateCloudiness_Params
	{
	public:
		float                                                      SunAmt;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CloudAmt;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ReceiveTick
	 */
	struct ABP_VolumetricCloud_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetEmission
	 */
	struct ABP_VolumetricCloud_Base_C_SetEmission_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ExecuteUbergraph_BP_VolumetricCloud_Base
	 */
	struct ABP_VolumetricCloud_Base_C_ExecuteUbergraph_BP_VolumetricCloud_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
