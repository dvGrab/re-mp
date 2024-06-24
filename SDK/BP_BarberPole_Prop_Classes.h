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
	 * BlueprintGeneratedClass BP_BarberPole_Prop.BP_BarberPole_Prop_C
	 * Size -> 0x0019 (FullSize[0x0301] - InheritedSize[0x02E8])
	 */
	class ABP_BarberPole_Prop_C : public ABP_Generic_Prop_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Spinner;                                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Target;                                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpins;                                                  // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_BarberPole_Prop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
