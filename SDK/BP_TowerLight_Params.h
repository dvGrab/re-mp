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
	 * Function BP_TowerLight.BP_TowerLight_C.GetCoronaColor
	 */
	struct ABP_TowerLight_C_GetCoronaColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.ConstructMID
	 */
	struct ABP_TowerLight_C_ConstructMID_Params
	{	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.GetColorAmt
	 */
	struct ABP_TowerLight_C_GetColorAmt_Params
	{
	public:
		float                                                      CurveColor;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.UpdateColors
	 */
	struct ABP_TowerLight_C_UpdateColors_Params
	{
	public:
		float                                                      Current;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.UserConstructionScript
	 */
	struct ABP_TowerLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.ReceiveBeginPlay
	 */
	struct ABP_TowerLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.ReceiveTick
	 */
	struct ABP_TowerLight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.ChangedLightSwitch
	 */
	struct ABP_TowerLight_C_ChangedLightSwitch_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsEditor;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TowerLight.BP_TowerLight_C.ExecuteUbergraph_BP_TowerLight
	 */
	struct ABP_TowerLight_C_ExecuteUbergraph_BP_TowerLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
