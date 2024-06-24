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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_lamppost3.BP_lamppost3_C
	 * Size -> 0x0010 (FullSize[0x03C8] - InheritedSize[0x03B8])
	 */
	class ABP_lamppost3_C : public ABP_Streetlight_Spot_C
	{
	public:
		class UStaticMeshComponent*                                PhysicsFloor;                                            // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool SetupBreakableInGTA();
		void GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh);
		void GetPhysicsFloor(class UStaticMeshComponent** Floor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
