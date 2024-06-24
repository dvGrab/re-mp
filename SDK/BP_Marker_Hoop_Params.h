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
	 * Function BP_Marker_Hoop.BP_Marker_Hoop_C.ProcessCheckpointType
	 */
	struct ABP_Marker_Hoop_C_ProcessCheckpointType_Params
	{
	public:
		ECheckpointType                                            CheckpointType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveBeginPlay
	 */
	struct ABP_Marker_Hoop_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveTick
	 */
	struct ABP_Marker_Hoop_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Marker_Hoop.BP_Marker_Hoop_C.ExecuteUbergraph_BP_Marker_Hoop
	 */
	struct ABP_Marker_Hoop_C_ExecuteUbergraph_BP_Marker_Hoop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
