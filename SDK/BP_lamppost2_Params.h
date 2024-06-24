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
	 * Function BP_lamppost2.BP_lamppost2_C.SetupBreakableInGTA
	 */
	struct ABP_lamppost2_C_SetupBreakableInGTA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_lamppost2.BP_lamppost2_C.GetBrokenMesh
	 */
	struct ABP_lamppost2_C_GetBrokenMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_lamppost2.BP_lamppost2_C.GetPhysicsFloor
	 */
	struct ABP_lamppost2_C_GetPhysicsFloor_Params
	{
	public:
		class UStaticMeshComponent*                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_lamppost2.BP_lamppost2_C.GetLights
	 */
	struct ABP_lamppost2_C_GetLights_Params
	{
	public:
		TArray<class ULocalLightComponent*>                        Light;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
