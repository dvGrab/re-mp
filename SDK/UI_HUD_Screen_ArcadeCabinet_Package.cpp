/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C.GetMainIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      Image1                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_ArcadeCabinet_C::GetMainIcon(class UImage** Image1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C.GetMainIcon");
		
		UUI_HUD_Screen_ArcadeCabinet_C_GetMainIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image1 != nullptr)
			*Image1 = params.Image1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Screen_ArcadeCabinet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Screen_ArcadeCabinet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C");
		return ptr;
	}

}


