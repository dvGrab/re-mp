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
	 * BlueprintGeneratedClass BP_Tree_All.BP_Tree_All_C
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class ABP_Tree_All_C : public AIPLMapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Tree_All(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
