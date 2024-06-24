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
	 * WidgetBlueprintGeneratedClass UI_HUD_Button_TwoImage.UI_HUD_Button_TwoImage_C
	 * Size -> 0x000F (FullSize[0x04F8] - InheritedSize[0x04E9])
	 */
	class UUI_HUD_Button_TwoImage_C : public UUI_HUD_Button_Base_C
	{
	public:
		unsigned char                                              UnknownData_QXMA[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetSecondImage(class UTexture2D* Texture);
		void SetSecondImageColor(const struct FLinearColor& Color);
		void SetSecondImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
		void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
		void SetSecondImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
		void ExecuteUbergraph_UI_HUD_Button_TwoImage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
