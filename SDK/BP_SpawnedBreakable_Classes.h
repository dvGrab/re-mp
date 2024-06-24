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
	 * BlueprintGeneratedClass BP_SpawnedBreakable.BP_SpawnedBreakable_C
	 * Size -> 0x0000 (FullSize[0x02E8] - InheritedSize[0x02E8])
	 */
	class ABP_SpawnedBreakable_C : public ABP_Prop_C
	{
	public:
		bool SetupBreakableInGTA();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
