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
	 * BlueprintGeneratedClass BP_Marker_Hoop.BP_Marker_Hoop_C
	 * Size -> 0x000C (FullSize[0x02E8] - InheritedSize[0x02DC])
	 */
	class ABP_Marker_Hoop_C : public ABP_Marker_Base_C
	{
	public:
		unsigned char                                              UnknownData_MATO[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ProcessCheckpointType(ECheckpointType CheckpointType);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Marker_Hoop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
