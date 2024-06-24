#include "Game.h"
#include "Utilities.h"

void c_game::initialize()
{
	auto base = (DWORD64)GetModuleHandle(NULL);

	if (this->SetMaxWantedLevel == nullptr)
		this->SetMaxWantedLevel = (fnSetMaxWantedLevel)(base + 0x10E24F0);

	if (this->GetPlayerPed == nullptr)
		this->GetPlayerPed = (fnGetPlayerPed)(base + 0x10C9A00);

	if (this->SetModelIndex == nullptr)
		this->SetModelIndex = (fnSetModelIndex)(base + 0x117C970);


	// apply patches to the game
	this->patches();
}

void c_game::patches()
{
	// Removing ped population on street
	utilities->patch(0x11BDF72, 0x90, 5);
	utilities->patch(0x11BDE32, 0x90, 5);
	utilities->patch(0x11BDFFD, 0x90, 5);

	// Removing vehicle population on street
	utilities->patch(0x10A277D, 0x90, 5);
	utilities->patch(0x10A2782, 0x90, 5);
	utilities->patch(0x10A2787, 0x90, 5);
	utilities->patch(0x10A27FF, 0x90, 5); // removing parked vehicles
	utilities->patch(0x10A1F83, 0x90, 5); 

	// Patching populate interior
	utilities->patch(0x0FE3DEC, 0x90, 5);

	/* 
		- removing interior pop
		- removing pickups
		- removing entries
		- removing parked vehicles
	*/
}
