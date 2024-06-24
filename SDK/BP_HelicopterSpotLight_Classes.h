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
	 * BlueprintGeneratedClass BP_HelicopterSpotLight.BP_HelicopterSpotLight_C
	 * Size -> 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
	 */
	class UBP_HelicopterSpotLight_C : public USpotLightComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              FollowingActor;                                          // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddOffsetToTarget(const struct FVector& LocationIn, struct FVector* LocationOut);
		void UpdateLightPosition(float dT);
		void SetFollowingActor(class AActor* NewActor);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_HelicopterSpotLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
