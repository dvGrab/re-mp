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
	 * Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ProcessCheckpointType
	 */
	struct ABP_Marker_Cylinder_C_ProcessCheckpointType_Params
	{
	public:
		ECheckpointType                                            CheckpointType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveTick
	 */
	struct ABP_Marker_Cylinder_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveBeginPlay
	 */
	struct ABP_Marker_Cylinder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.SetMarkerColor
	 */
	struct ABP_Marker_Cylinder_C_SetMarkerColor_Params
	{
	public:
		struct FColor                                              withColor;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ExecuteUbergraph_BP_Marker_Cylinder
	 */
	struct ABP_Marker_Cylinder_C_ExecuteUbergraph_BP_Marker_Cylinder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NCK7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
