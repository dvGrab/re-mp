﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_COL_V_Ind_CM_WeldMachine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_COL_V_Ind_CM_WeldMachine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_COL_V_Ind_CM_WeldMachine.BP_COL_V_Ind_CM_WeldMachine_C");
		return ptr;
	}

}

