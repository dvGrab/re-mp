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
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetWalkLight
	 */
	struct ABP_TrafficLight_Base_C_SetWalkLight_Params
	{
	public:
		int32_t                                                    withState;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NWT7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetTrafficLight
	 */
	struct ABP_TrafficLight_Base_C_SetTrafficLight_Params
	{
	public:
		int32_t                                                    withState;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.RegisterTrafficCorona
	 */
	struct ABP_TrafficLight_Base_C_RegisterTrafficCorona_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SocketName2;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        CoronaColor;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UnregisterTrafficCorona
	 */
	struct ABP_TrafficLight_Base_C_UnregisterTrafficCorona_Params
	{	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UserConstructionScript
	 */
	struct ABP_TrafficLight_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ReceiveEndPlay
	 */
	struct ABP_TrafficLight_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ExecuteUbergraph_BP_TrafficLight_Base
	 */
	struct ABP_TrafficLight_Base_C_ExecuteUbergraph_BP_TrafficLight_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
