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
	 * WidgetBlueprintGeneratedClass UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C
	 * Size -> 0x001C (FullSize[0x0474] - InheritedSize[0x0458])
	 */
	class UUI_HUD_Screen_SchoolTV_C : public UUI_HUD_Screen_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BlackScreen;                                             // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainIcon;                                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      FadeTime;                                                // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CustomBoolReturnFunction(const class FString& FunctionName);
		void UpdateBlackFade(float dT);
		void GetMainIcon(class UImage** Image1);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void ExecuteUbergraph_UI_HUD_Screen_SchoolTV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
