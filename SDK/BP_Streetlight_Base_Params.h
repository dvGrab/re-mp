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
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetCollisionParticleFX
	 */
	struct ABP_Streetlight_Base_C_GetCollisionParticleFX_Params
	{
	public:
		class UParticleSystem*                                     System;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupImpostorComponent
	 */
	struct ABP_Streetlight_Base_C_SetupImpostorComponent_Params
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateReflectionCorona
	 */
	struct ABP_Streetlight_Base_C_UpdateReflectionCorona_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FS93[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULightComponent*                                     Light;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetupBroken
	 */
	struct ABP_Streetlight_Base_C_SetupBroken_Params
	{
	public:
		struct FVector                                             impulseSrc;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             impulseVelocity;                                         // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBUC[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          floorTransform;                                          // 0x0020(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.ShowLightsInGame
	 */
	struct ABP_Streetlight_Base_C_ShowLightsInGame_Params
	{	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.UpdateLightState
	 */
	struct ABP_Streetlight_Base_C_UpdateLightState_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZNDC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.GetLights
	 */
	struct ABP_Streetlight_Base_C_GetLights_Params
	{
	public:
		TArray<class ULocalLightComponent*>                        Light;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.UserConstructionScript
	 */
	struct ABP_Streetlight_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Streetlight_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.SetLights
	 */
	struct ABP_Streetlight_Base_C_SetLights_Params
	{
	public:
		bool                                                       bLightsOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceForEditor;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.ReceiveEndPlay
	 */
	struct ABP_Streetlight_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.AddCollisionEffects
	 */
	struct ABP_Streetlight_Base_C_AddCollisionEffects_Params
	{
	public:
		float                                                      impulseAmt;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Dir;                                                     // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.Dislodged
	 */
	struct ABP_Streetlight_Base_C_Dislodged_Params
	{	};

	/**
	 * Function BP_Streetlight_Base.BP_Streetlight_Base_C.ExecuteUbergraph_BP_Streetlight_Base
	 */
	struct ABP_Streetlight_Base_C_ExecuteUbergraph_BP_Streetlight_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
