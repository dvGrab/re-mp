﻿#pragma once

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
	 * Function BP_Tree_All.BP_Tree_All_C.GetStaticVolumetricStrength
	 */
	struct ABP_Tree_All_C_GetStaticVolumetricStrength_Params
	{
	public:
		float                                                      intoAO;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      intoUplight;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tree_All.BP_Tree_All_C.ReceiveBeginPlay
	 */
	struct ABP_Tree_All_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Tree_All.BP_Tree_All_C.ExecuteUbergraph_BP_Tree_All
	 */
	struct ABP_Tree_All_C_ExecuteUbergraph_BP_Tree_All_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif