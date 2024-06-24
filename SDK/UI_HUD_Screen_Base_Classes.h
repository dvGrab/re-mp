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
	 * WidgetBlueprintGeneratedClass UI_HUD_Screen_Base.UI_HUD_Screen_Base_C
	 * Size -> 0x001C (FullSize[0x0458] - InheritedSize[0x043C])
	 */
	class UUI_HUD_Screen_Base_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_BB8D[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Show;                                                    // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void GetSecondIcon(class UImage** Image2);
		void GetMainIcon(class UImage** Image1);
		void SetSpecificImageLocation(class UCanvasPanelSlot* Slot, float xMin, float yMin, float Xmax, float Ymax, bool Debug);
		void Set_Icon_Anchors(class UCanvasPanelSlot* Slot, const struct FAnchors& DefaultAnchor, float xMin, float Xmax, float yMin, float Ymax);
		void StartShowHide(bool DoShow);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void Construct();
		void SetSecondImageColor(const struct FLinearColor& Color);
		void SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
		void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
		void ExecuteUbergraph_UI_HUD_Screen_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
