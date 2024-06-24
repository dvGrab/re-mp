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
	 * WidgetBlueprintGeneratedClass Transition_Load_SA.Transition_Load_SA_C
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class UTransition_Load_SA_C : public UTransition_LoadingTemplate_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Transition_Load_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
