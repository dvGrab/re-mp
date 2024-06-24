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
	 * BlueprintGeneratedClass BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C
	 * Size -> 0x004D (FullSize[0x03BD] - InheritedSize[0x0370])
	 */
	class UBP_RotatingColoredSpotLight_C : public USpotLightComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ToggleOffsetSeconds;                                     // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotationPerSecond;                                       // 0x037C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            InitialRotation;                                         // 0x0388(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeBetweenToggles;                                      // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeSinceToggle;                                         // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color1;                                                  // 0x039C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color2;                                                  // 0x03AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsColor1;                                                // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_RotatingColoredSpotLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
