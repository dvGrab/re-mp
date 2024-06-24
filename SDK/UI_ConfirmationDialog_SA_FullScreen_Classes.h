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
	 * WidgetBlueprintGeneratedClass UI_ConfirmationDialog_SA_FullScreen.UI_ConfirmationDialog_SA_FullScreen_C
	 * Size -> 0x000A (FullSize[0x0C50] - InheritedSize[0x0C46])
	 */
	class UUI_ConfirmationDialog_SA_FullScreen_C : public UConfirmationDialog_C
	{
	public:
		unsigned char                                              UnknownData_CDWX[0x2];                                   // 0x0C46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C48(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_ConfirmationDialog_SA_FullScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
