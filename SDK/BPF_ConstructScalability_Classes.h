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
	 * BlueprintGeneratedClass BPF_ConstructScalability.BPF_ConstructScalability_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_ConstructScalability_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetScalabilityClass(class AGTAWorldSettings* WorldSettings, class UObject* __WorldContext, class UClass** ReturnClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
