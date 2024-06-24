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
	 * Function BP_BloodPool.BP_BloodPool_C.ReceiveBeginPlay
	 */
	struct ABP_BloodPool_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BloodPool.BP_BloodPool_C.ReceiveTick
	 */
	struct ABP_BloodPool_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BloodPool.BP_BloodPool_C.FadeOut
	 */
	struct ABP_BloodPool_C_FadeOut_Params
	{	};

	/**
	 * Function BP_BloodPool.BP_BloodPool_C.ExecuteUbergraph_BP_BloodPool
	 */
	struct ABP_BloodPool_C_ExecuteUbergraph_BP_BloodPool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
