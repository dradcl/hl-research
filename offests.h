#pragma once
#include <Windows.h>

namespace HLOFFSET
{
	namespace HLWEAPON
	{
		uintptr_t CLIPAMMO = 0xA0;
		uintptr_t WEAPONTYPE = 0x4CC;
		uintptr_t WEAPONINDEX = 0x78; // 1 - 15, see notes.txt

		namespace HLAMMOTYPE
		{
			uintptr_t _9MM = 0x4DC;
			uintptr_t _357 = 0x4E4;
			uintptr_t _9MMGRENADES = 0x4E0;
			uintptr_t SHELLS = 0x4D8;
			uintptr_t ARROWS = 0x4F0;
			uintptr_t ROCKETS = 0x4EC;
			uintptr_t CELLS = 0x4E8;
			uintptr_t HORNETS = 0x504;
			uintptr_t GRENADES = 0x4FC;
			uintptr_t SATCHELS = 0x4F8;
			uintptr_t TRIPMINES = 0x4F4;
			uintptr_t SNARKS = 0x500;
		}
	}

	namespace HLPLAYER
	{
		uintptr_t HEALTH = 0x504;
		uintptr_t SUIT = 0x560;
		uintptr_t WEAPONS = 0x3A0;
		uintptr_t PLAYERX = 0x3AC;
		uintptr_t PLAYERY = 0x3B0;
		uintptr_t PLAYERZ = 0x3B4; // Higher is increased. c1a0 is around -203
	}
}

namespace Options
{
	bool bInfiniteAmmo = false;
	bool bGodmode = false;
	bool bInfiniteFlash = false;
	bool bFOVFlag = false;
}