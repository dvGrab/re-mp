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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_MTraffic1.BP_MTraffic1_C
	 * Size -> 0x0010 (FullSize[0x03F8] - InheritedSize[0x03E8])
	 */
	class ABP_MTraffic1_C : public ABP_TrafficLight_GTASA_C
	{
	public:
		class UStaticMeshComponent*                                PhysicsFloor;                                            // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool SetupBreakableInGTA();
		void GetPhysicsFloor(class UStaticMeshComponent** Floor);
		void GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
