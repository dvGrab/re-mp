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
	 * WidgetBlueprintGeneratedClass UI_HUD_FillButton.UI_HUD_FillButton_C
	 * Size -> 0x000F (FullSize[0x04F8] - InheritedSize[0x04E9])
	 */
	class UUI_HUD_FillButton_C : public UUI_HUD_Button_Base_C
	{
	public:
		unsigned char                                              UnknownData_UZEX[0x7];                                   // 0x04E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void SetImageFillAmmount(float Percentage);
		void SetupSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& Color, float FillAmmount);
		void Construct();
		void SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount);
		void SetSecondImageFillAmount(float FillAmmount);
		void SetImage(class UTexture2D* Texture);
		void ExecuteUbergraph_UI_HUD_FillButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
