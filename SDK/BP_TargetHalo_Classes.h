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
	 * BlueprintGeneratedClass BP_TargetHalo.BP_TargetHalo_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABP_TargetHalo_C : public AGTATargetHalo
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float Alpha);
		void SetupTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float InitialAlpha);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
