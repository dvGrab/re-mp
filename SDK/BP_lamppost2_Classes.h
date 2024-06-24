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
	 * BlueprintGeneratedClass BP_lamppost2.BP_lamppost2_C
	 * Size -> 0x0018 (FullSize[0x03D0] - InheritedSize[0x03B8])
	 */
	class ABP_lamppost2_C : public ABP_Streetlight_Spot_C
	{
	public:
		class UStaticMeshComponent*                                PhysicsFloor;                                            // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BrokenMesh;                                              // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight2;                                              // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool SetupBreakableInGTA();
		void GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh);
		void GetPhysicsFloor(class UStaticMeshComponent** Floor);
		void GetLights(TArray<class ULocalLightComponent*>* Light);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
