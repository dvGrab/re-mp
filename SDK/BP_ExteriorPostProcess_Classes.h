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
	 * BlueprintGeneratedClass BP_ExteriorPostProcess.BP_ExteriorPostProcess_C
	 * Size -> 0x0010 (FullSize[0x08A0] - InheritedSize[0x0890])
	 */
	class ABP_ExteriorPostProcess_C : public AGTAPostProcessVolume
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0890(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_GTA_ProceduralSky_C*                             SkyBox;                                                  // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSettings();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_ExteriorPostProcess(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
