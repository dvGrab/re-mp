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
	 * Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveBeginPlay
	 */
	struct UBP_VehicleLight_Blinking_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveTick
	 */
	struct UBP_VehicleLight_Blinking_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ExecuteUbergraph_BP_VehicleLight_Blinking
	 */
	struct UBP_VehicleLight_Blinking_C_ExecuteUbergraph_BP_VehicleLight_Blinking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
