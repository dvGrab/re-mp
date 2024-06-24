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
	 * WidgetBlueprintGeneratedClass Transition_Busted_SA.Transition_Busted_SA_C
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UTransition_Busted_SA_C : public UTransition_Wasted_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Transition_Busted_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
