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
	 * BlueprintGeneratedClass BP_CardboardBox.BP_CardboardBox_C
	 * Size -> 0x0000 (FullSize[0x02F8] - InheritedSize[0x02F8])
	 */
	class ABP_CardboardBox_C : public ABP_Breakable_Base_C
	{
	public:
		void ImpulseMultiplier(float* NewParam);
		bool SetupBreakableInGTA();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
