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
	 * BlueprintGeneratedClass BP_GTASA_Tag.BP_GTASA_Tag_C
	 * Size -> 0x0009 (FullSize[0x02E1] - InheritedSize[0x02D8])
	 */
	class ABP_GTASA_Tag_C : public ADynamicIPLMapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Force_Refresh;                                           // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_GTASA_Tag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
