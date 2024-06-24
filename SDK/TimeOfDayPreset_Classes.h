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
	 * BlueprintGeneratedClass TimeOfDayPreset.TimeOfDayPreset_C
	 * Size -> 0x00A4 (FullSize[0x00CC] - InheritedSize[0x0028])
	 */
	class UTimeOfDayPreset_C : public UObject
	{
	public:
		struct FTimeOfDayData                                      Data;                                                    // 0x0028(0x00A4) Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
