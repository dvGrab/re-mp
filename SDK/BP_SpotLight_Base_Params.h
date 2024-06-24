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
	 * Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveBeginPlay
	 */
	struct ABP_SpotLight_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveEndPlay
	 */
	struct ABP_SpotLight_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpotLight_Base.BP_SpotLight_Base_C.ExecuteUbergraph_BP_SpotLight_Base
	 */
	struct ABP_SpotLight_Base_C_ExecuteUbergraph_BP_SpotLight_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
