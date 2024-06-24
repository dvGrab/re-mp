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
	 * Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.UpdateSettings
	 */
	struct ABP_ExteriorPostProcess_C_UpdateSettings_Params
	{	};

	/**
	 * Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveBeginPlay
	 */
	struct ABP_ExteriorPostProcess_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveTick
	 */
	struct ABP_ExteriorPostProcess_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ExecuteUbergraph_BP_ExteriorPostProcess
	 */
	struct ABP_ExteriorPostProcess_C_ExecuteUbergraph_BP_ExteriorPostProcess_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
