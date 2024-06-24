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
	 * Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveTick
	 */
	struct ABP_Weapon_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Base.BP_Weapon_Base_C.AddSpin
	 */
	struct ABP_Weapon_Base_C_AddSpin_Params
	{
	public:
		class AGTAWeapon*                                          srcWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_Base.BP_Weapon_Base_C.StopSpin
	 */
	struct ABP_Weapon_Base_C_StopSpin_Params
	{	};

	/**
	 * Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base
	 */
	struct ABP_Weapon_Base_C_ExecuteUbergraph_BP_Weapon_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
