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
	 * BlueprintGeneratedClass BP_PorchLight.BP_PorchLight_C
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class ABP_PorchLight_C : public AIPLMapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ChangedLightSwitch(bool bOn, bool bIsEditor);
		void ExecuteUbergraph_BP_PorchLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
