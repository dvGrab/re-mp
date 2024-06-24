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
	 * BlueprintGeneratedClass BP_ExteriorHeightFog.BP_ExteriorHeightFog_C
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ABP_ExteriorHeightFog_C : public ABP_HeightFog_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void TimeChanged(bool bEditor);
		void ExecuteUbergraph_BP_ExteriorHeightFog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
