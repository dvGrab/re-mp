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
	 * BlueprintGeneratedClass BP_SA_Weapon_Missile.BP_SA_Weapon_Missile_C
	 * Size -> 0x000F (FullSize[0x02C8] - InheritedSize[0x02B9])
	 */
	class ABP_SA_Weapon_Missile_C : public ABP_GTASA_Weapon_C
	{
	public:
		unsigned char                                              UnknownData_IACL[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            FX_jetpack1;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
