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
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.SetupBroken
	 */
	struct ABP_StreetlightProp_C_SetupBroken_Params
	{
	public:
		struct FVector                                             impulseSrc;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             impulseVelocity;                                         // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3CU[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          floorTransform;                                          // 0x0020(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9TLF[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.GetPhysicsFloor
	 */
	struct ABP_StreetlightProp_C_GetPhysicsFloor_Params
	{
	public:
		class UStaticMeshComponent*                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.GetBrokenMesh
	 */
	struct ABP_StreetlightProp_C_GetBrokenMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.UserConstructionScript
	 */
	struct ABP_StreetlightProp_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.ReceiveBeginPlay
	 */
	struct ABP_StreetlightProp_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.RemoveFloor
	 */
	struct ABP_StreetlightProp_C_RemoveFloor_Params
	{	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.HideBroken
	 */
	struct ABP_StreetlightProp_C_HideBroken_Params
	{	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.EntityLinked
	 */
	struct ABP_StreetlightProp_C_EntityLinked_Params
	{
	public:
		bool                                                       bShouldBeVisible;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StreetlightProp.BP_StreetlightProp_C.ExecuteUbergraph_BP_StreetlightProp
	 */
	struct ABP_StreetlightProp_C_ExecuteUbergraph_BP_StreetlightProp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AX6E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
