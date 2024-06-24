﻿#pragma once

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
	 * Function BP_Breakable_Base.BP_Breakable_Base_C.SetupBreakableInGTA
	 */
	struct ABP_Breakable_Base_C_SetupBreakableInGTA_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Breakable_Base.BP_Breakable_Base_C.GetPhysicsFloor
	 */
	struct ABP_Breakable_Base_C_GetPhysicsFloor_Params
	{
	public:
		class UStaticMeshComponent*                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Breakable_Base.BP_Breakable_Base_C.GetBrokenMesh
	 */
	struct ABP_Breakable_Base_C_GetBrokenMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif