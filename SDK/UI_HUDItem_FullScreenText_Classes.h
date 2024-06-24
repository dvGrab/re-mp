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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C
	 * Size -> 0x001C (FullSize[0x0458] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_FullScreenText_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_T9H0[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnchors                                            OriginalAnchorPos;                                       // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
		void SetMainContentOriginalAnchors();
		void GetRichText(class URichTextBlock** Text);
		void UpdateOpacity(float Alpha);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentPercentOffset(float X, float Y);
		void ExecuteUbergraph_UI_HUDItem_FullScreenText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
