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
	 * Function BP_DynamicProp.BP_DynamicProp_C.GetOutwardVelocityAmt
	 */
	struct ABP_DynamicProp_C_GetOutwardVelocityAmt_Params
	{
	public:
		float                                                      amt;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloorC
	 */
	struct ABP_DynamicProp_C_GetPhysicsFloorC_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.ImpulseMultiplier
	 */
	struct ABP_DynamicProp_C_ImpulseMultiplier_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.SetupBroken
	 */
	struct ABP_DynamicProp_C_SetupBroken_Params
	{
	public:
		struct FVector                                             impulseSrc;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             impulseVelocity;                                         // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQ5Q[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          floorTransform;                                          // 0x0020(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WXPL[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.GetPhysicsFloor
	 */
	struct ABP_DynamicProp_C_GetPhysicsFloor_Params
	{
	public:
		class UStaticMeshComponent*                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.GetBrokenMesh
	 */
	struct ABP_DynamicProp_C_GetBrokenMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.UserConstructionScript
	 */
	struct ABP_DynamicProp_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.ReceiveBeginPlay
	 */
	struct ABP_DynamicProp_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.RemoveFloor
	 */
	struct ABP_DynamicProp_C_RemoveFloor_Params
	{	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.HideBroken
	 */
	struct ABP_DynamicProp_C_HideBroken_Params
	{	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.EntityLinked
	 */
	struct ABP_DynamicProp_C_EntityLinked_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.CleanupBreak
	 */
	struct ABP_DynamicProp_C_CleanupBreak_Params
	{	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.AddCollisionEffects
	 */
	struct ABP_DynamicProp_C_AddCollisionEffects_Params
	{
	public:
		float                                                      impulseAmt;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Dir;                                                     // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicProp.BP_DynamicProp_C.ExecuteUbergraph_BP_DynamicProp
	 */
	struct ABP_DynamicProp_C_ExecuteUbergraph_BP_DynamicProp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
