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
	 * BlueprintGeneratedClass BP_Weapon_Base.BP_Weapon_Base_C
	 * Size -> 0x0009 (FullSize[0x02B9] - InheritedSize[0x02B0])
	 */
	class ABP_Weapon_Base_C : public AGTAWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bSpinning;                                               // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void AddSpin(class AGTAWeapon* srcWeapon);
		void StopSpin();
		void ExecuteUbergraph_BP_Weapon_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
