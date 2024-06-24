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
	 * BlueprintGeneratedClass BP_Marker_Base.BP_Marker_Base_C
	 * Size -> 0x0034 (FullSize[0x02DC] - InheritedSize[0x02A8])
	 */
	class ABP_Marker_Base_C : public AGTAMarkerActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Mesh;                                                    // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RotationSpeed;                                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DCK5[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StoredMeshHeight;                                        // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AxisOfRotation;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveScale;                                           // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ProcessAxis(float X, float Y, float Z, float* OutX, float* OutY, float* OutZ);
		void ProcessCheckpointType(ECheckpointType CheckpointType);
		void ReceiveTick(float DeltaSeconds);
		void SetMarkerColor(const struct FColor& withColor);
		void ReceiveBeginPlay();
		void SetCheckpointType(int32_t Cpt);
		void ExecuteUbergraph_BP_Marker_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
