﻿#pragma once

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
	 * Function BP_ResidentLightNew1.BP_ResidentLightNew1_C.ChangedLightSwitch
	 */
	struct ABP_ResidentLightNew1_C_ChangedLightSwitch_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsEditor;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ResidentLightNew1.BP_ResidentLightNew1_C.ExecuteUbergraph_BP_ResidentLightNew1
	 */
	struct ABP_ResidentLightNew1_C_ExecuteUbergraph_BP_ResidentLightNew1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif