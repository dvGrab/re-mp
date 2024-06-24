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
	 * Function BP_Radar_Base.BP_Radar_Base_C.GetRadarComponents
	 */
	struct ABP_Radar_Base_C_GetRadarComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         RadarComps;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Radar_Base.BP_Radar_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Radar_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Radar_Base.BP_Radar_Base_C.ExecuteUbergraph_BP_Radar_Base
	 */
	struct ABP_Radar_Base_C_ExecuteUbergraph_BP_Radar_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EBM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
