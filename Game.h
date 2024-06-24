#pragma once

#include <Windows.h>
#include "Engine.h"
#include "Main.h"

struct Vector3 {
	float x;
	float y;
	float z;
};

class CMatrix {
public:
	char padding_one[0x30];
	Vector3 Position;
};

class CWeapon
{
public:
	int64_t Id; //0x07E8
	int32_t Bullets; //0x07F0
	int32_t Capacity; //0x07F4
	int64_t Unknown; //0x07F8
	uint64_t Unknown2; //0x0800
	uint64_t Unknown3; //0x0808
};

enum WeaponIds {
	HAND,
	MELEE,
	HANDGUNS,
	SHOTGUNS,
	SUBMACHINE,
	ASSAULT,
	RIFLES,
	HEAVY,
	PROJECTILE,
	SPECIALONE,
	GIFTS,
	SPECIALTWO,
	DETONATOR
};

class CPed {
public:
	char padding_one[0x18];
	class CMatrix* Matrix;

	char padding_two[0x778];
	CWeapon Weapons[13];
};

class c_game {
private:
	typedef int64_t(__fastcall* fnSetMaxWantedLevel)(int level);
	typedef CPed* (__fastcall* fnGetPlayerPed)(int id);
	typedef int64_t(__fastcall* fnSetModelIndex)(CPed* ped, int index);

public:
	void initialize();

	void patches();

	fnGetPlayerPed GetPlayerPed = nullptr;
	fnSetMaxWantedLevel SetMaxWantedLevel = nullptr;
	fnSetModelIndex SetModelIndex = nullptr;
};
extern c_game* game;