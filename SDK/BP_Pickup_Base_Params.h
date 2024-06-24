#pragma once

/**
 * Name: GTASA
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
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.ProcessDissolve
	 */
	struct ABP_Pickup_Base_C_ProcessDissolve_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.GetMeshOverrideData
	 */
	struct ABP_Pickup_Base_C_GetMeshOverrideData_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKCT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FColor                                              lightColor;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LightAttenuationRadius;                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XOJZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.SetMyColor
	 */
	struct ABP_Pickup_Base_C_SetMyColor_Params
	{
	public:
		struct FColor                                              InColor;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Pickup_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveTick
	 */
	struct ABP_Pickup_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerColor
	 */
	struct ABP_Pickup_Base_C_SetMarkerColor_Params
	{
	public:
		struct FColor                                              withColor;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerMesh
	 */
	struct ABP_Pickup_Base_C_SetMarkerMesh_Params
	{
	public:
		class UStaticMesh*                                         withMesh;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.SetGroundLocation
	 */
	struct ABP_Pickup_Base_C_SetGroundLocation_Params
	{
	public:
		struct FVector                                             withLocation;                                            // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.StartDissolve
	 */
	struct ABP_Pickup_Base_C_StartDissolve_Params
	{
	public:
		bool                                                       bPickedUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerOutline
	 */
	struct ABP_Pickup_Base_C_SetMarkerOutline_Params
	{
	public:
		struct FColor                                              withColor;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pickup_Base.BP_Pickup_Base_C.ExecuteUbergraph_BP_Pickup_Base
	 */
	struct ABP_Pickup_Base_C_ExecuteUbergraph_BP_Pickup_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TG63[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
