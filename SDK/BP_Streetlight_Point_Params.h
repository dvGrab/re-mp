﻿#pragma once

/**
 * Name: GTA-SA-DEF
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Streetlight_Point.BP_Streetlight_Point_C.GetLights
	 */
	struct ABP_Streetlight_Point_C_GetLights_Params
	{
	public:
		TArray<class ULocalLightComponent*>                        Light;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
