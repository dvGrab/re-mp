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
	 * WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C
	 * Size -> 0x0091 (FullSize[0x0489] - InheritedSize[0x03F8])
	 */
	class UUI_MainMenu_C : public UUI_Menu_Base_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuHelpText_Template_C*                            AcceptOptionsChangesHelp;                                // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BackgroundContainer;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FillerImage_4;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HelpContextBottomBox;                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HelpContextItems;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HolderCanvas;                                            // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        LeftPanels;                                              // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_UserInfo_C*                                      LoginInfo;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LogoImage;                                               // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MenuButtonPanel;                                         // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuHelpText_Template_C*                            SCSignIn;                                                // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuHelpText_Template_C*                            SCSignUp;                                                // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuHelpText_Template_C*                            SCUnlink;                                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SelectorWidget;                                          // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Button_AccountPicker_C*                          UI_Button_AccountPicker;                                 // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionTextBox;                                          // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ForceNoLegal;                                            // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int32_t* IndexInWidgetSelector);
		void GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget);
		bool CustomFunctionWithBoolReturn(const class FString& FunctionString, bool* Handled);
		void GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget);
		void GetSocialClubTab(class UUI_SocialClub_C** OutSocialClubTab, int32_t* IndexInWidgetSelector);
		void StartupChecks();
		void StartLegalScreens();
		void Password(bool OnIncorrect_Pass);
		void GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject);
		void ShowConfirmChangesHelpText(bool ShouldShow);
		void GetVersionNumber(class UWidget** VersionTextBox);
		void GetBackgroundContainer(class UCanvasPanel** CanvasPanel);
		void GetHolderCanvas(class UCanvasPanel** Canvas);
		void UseAltText(int32_t Index, bool* ShouldUse);
		void GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int32_t* IndexInWidgetSelector);
		void SetupLayout();
		void Setup_Misc();
		void OnSynchronizeProperties();
		void SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnPass(const class FString& OutPass);
		void Destruct();
		void NoLegal();
		void CustomFunctionFromString(const class FString& FunctionString);
		void ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
