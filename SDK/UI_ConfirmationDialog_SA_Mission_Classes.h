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
	 * WidgetBlueprintGeneratedClass UI_ConfirmationDialog_SA_Mission.UI_ConfirmationDialog_SA_Mission_C
	 * Size -> 0x0008 (FullSize[0x0C58] - InheritedSize[0x0C50])
	 */
	class UUI_ConfirmationDialog_SA_Mission_C : public UUI_ConfirmationDialog_FullScreen_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C50(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_ConfirmationDialog_SA_Mission(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
