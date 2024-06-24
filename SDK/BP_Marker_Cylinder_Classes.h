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
	 * BlueprintGeneratedClass BP_Marker_Cylinder.BP_Marker_Cylinder_C
	 * Size -> 0x0020 (FullSize[0x02FC] - InheritedSize[0x02DC])
	 */
	class ABP_Marker_Cylinder_C : public ABP_Marker_Base_C
	{
	public:
		unsigned char                                              UnknownData_NVQG[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CheckpointFlag;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      billboardlerp;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ProcessCheckpointType(ECheckpointType CheckpointType);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void SetMarkerColor(const struct FColor& withColor);
		void ExecuteUbergraph_BP_Marker_Cylinder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
