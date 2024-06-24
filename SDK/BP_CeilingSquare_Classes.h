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
	 * BlueprintGeneratedClass BP_CeilingSquare.BP_CeilingSquare_C
	 * Size -> 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
	 */
	class ABP_CeilingSquare_C : public ABP_SpotLight_Exterior_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_CeilingSquare;                                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ChangedLightSwitch(bool bOn, bool bIsEditor);
		void ExecuteUbergraph_BP_CeilingSquare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
