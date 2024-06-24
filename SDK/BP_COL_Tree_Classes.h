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
	 * BlueprintGeneratedClass BP_COL_Tree.BP_COL_Tree_C
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class ABP_COL_Tree_C : public ABP_COL_Prop_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_COL_Tree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
