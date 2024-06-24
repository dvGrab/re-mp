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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_BloodPool.BP_BloodPool_C
	 * Size -> 0x0034 (FullSize[0x02DC] - InheritedSize[0x02A8])
	 */
	class ABP_BloodPool_C : public AGTABloodPool
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     BloodDecal;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScalingUp;                                             // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_URR8[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInPerSecond;                                         // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFadingOut;                                             // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29W8[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutPerSecond;                                        // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void FadeOut();
		void ExecuteUbergraph_BP_BloodPool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
