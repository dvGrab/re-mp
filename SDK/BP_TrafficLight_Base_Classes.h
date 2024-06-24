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
	 * BlueprintGeneratedClass BP_TrafficLight_Base.BP_TrafficLight_Base_C
	 * Size -> 0x003F (FullSize[0x03E8] - InheritedSize[0x03A9])
	 */
	class ABP_TrafficLight_Base_C : public ABP_Streetlight_Base_C
	{
	public:
		unsigned char                                              UnknownData_UI11[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UMaterialInstanceConstant*>                   LightMaterials;                                          // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstanceConstant*>                   WalkMaterials;                                           // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LightIndex;                                              // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WalkIndex;                                               // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrafficCorona;                                           // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrafficCorona2;                                          // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetWalkLight(int32_t withState);
		void SetTrafficLight(int32_t withState);
		void RegisterTrafficCorona(const class FName& SocketName, const class FName& SocketName2, const struct FLinearColor& CoronaColor);
		void UnregisterTrafficCorona();
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_TrafficLight_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
