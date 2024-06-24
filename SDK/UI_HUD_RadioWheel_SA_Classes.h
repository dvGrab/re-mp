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
	 * WidgetBlueprintGeneratedClass UI_HUD_RadioWheel_SA.UI_HUD_RadioWheel_SA_C
	 * Size -> 0x0008 (FullSize[0x07D0] - InheritedSize[0x07C8])
	 */
	class UUI_HUD_RadioWheel_SA_C : public UUI_HUD_RadioWheel_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnSynchronizeProperties();
		void ExecuteUbergraph_UI_HUD_RadioWheel_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
