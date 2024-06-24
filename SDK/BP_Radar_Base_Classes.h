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
	 * BlueprintGeneratedClass BP_Radar_Base.BP_Radar_Base_C
	 * Size -> 0x0008 (FullSize[0x0688] - InheritedSize[0x0680])
	 */
	class ABP_Radar_Base_C : public AGTARadar
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0680(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Radar_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
