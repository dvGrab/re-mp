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
	 * BlueprintGeneratedClass BP_WindowSystem_Base.BP_WindowSystem_Base_C
	 * Size -> 0x0038 (FullSize[0x02D8] - InheritedSize[0x02A0])
	 */
	class ABP_WindowSystem_Base_C : public AGTAActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCurveLinearColor*                                   FlourescentCurve;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   IncandescentCurve;                                       // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   SoftWhiteCurve;                                          // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   EmissivePowerCurve;                                      // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateParameters(float TimeOfDay);
		void ReceiveTick(float DeltaSeconds);
		void TimeChanged(bool bEditor);
		void ExecuteUbergraph_BP_WindowSystem_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
