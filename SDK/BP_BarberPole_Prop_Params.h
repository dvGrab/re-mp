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
	 * Function BP_BarberPole_Prop.BP_BarberPole_Prop_C.ReceiveBeginPlay
	 */
	struct ABP_BarberPole_Prop_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BarberPole_Prop.BP_BarberPole_Prop_C.ReceiveTick
	 */
	struct ABP_BarberPole_Prop_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BarberPole_Prop.BP_BarberPole_Prop_C.ExecuteUbergraph_BP_BarberPole_Prop
	 */
	struct ABP_BarberPole_Prop_C_ExecuteUbergraph_BP_BarberPole_Prop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
