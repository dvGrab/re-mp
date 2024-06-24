/**
 * Name: GTA-SA-DEF
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_laeglenpark01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_laeglenpark01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_laeglenpark01.BP_laeglenpark01_C");
		return ptr;
	}

}


