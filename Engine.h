#pragma once

#include "Main.h"

#include "SDK.h"
#include <stdio.h>

#include <detours.h>
#pragma comment(lib, "detours.lib")

void postrender(CG::UCanvas* canvas);

class c_engine {
public:
	CG::UGTAViewportClient* viewport = nullptr;
	
	typedef void(__thiscall* postrender_type)(CG::UCanvas*);
	postrender_type postrender_ptr = nullptr;

	c_engine();

	bool initialize();
	void place_hooks();
	void remove_hooks();
	CG::ULocalPlayer* localplayer();
	CG::APlayerController* controller();
	CG::UWorld* world();
	CG::TArray<CG::ULevel*> levels();
	bool world_to_screen(CG::FVector position, CG::FVector2D* output);
};

extern c_engine *engine;