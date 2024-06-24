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
	 * Function BP_Streetlight_BollardPark.BP_Streetlight_BollardPark_C.SetupBreakableInGTA
	 */
	struct ABP_Streetlight_BollardPark_C_SetupBreakableInGTA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Streetlight_BollardPark.BP_Streetlight_BollardPark_C.GetPhysicsFloor
	 */
	struct ABP_Streetlight_BollardPark_C_GetPhysicsFloor_Params
	{
	public:
		class UStaticMeshComponent*                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Streetlight_BollardPark.BP_Streetlight_BollardPark_C.GetBrokenMesh
	 */
	struct ABP_Streetlight_BollardPark_C_GetBrokenMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
