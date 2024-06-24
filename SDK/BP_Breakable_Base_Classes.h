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
	 * BlueprintGeneratedClass BP_Breakable_Base.BP_Breakable_Base_C
	 * Size -> 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
	 */
	class ABP_Breakable_Base_C : public ABP_DynamicProp_C
	{
	public:
		class UStaticMeshComponent*                                PhysicsFloor;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

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
