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
	 * BlueprintGeneratedClass BP_SpotLight_Base.BP_SpotLight_Base_C
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class ABP_SpotLight_Base_C : public AGTASpotLight
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CoronaSize_1;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CoronaID;                                                // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_SpotLight_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
