#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Dungeon_Frieze

#include "Basic.hpp"

#include "GC_Frieze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Dungeon_Frieze.GC_Dungeon_Frieze_C
// 0x0000 (0x02B8 - 0x02B8)
class AGC_Dungeon_Frieze_C final : public AGC_Frieze_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Dungeon_Frieze_C">();
	}
	static class AGC_Dungeon_Frieze_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Dungeon_Frieze_C>();
	}
};
static_assert(alignof(AGC_Dungeon_Frieze_C) == 0x000008, "Wrong alignment on AGC_Dungeon_Frieze_C");
static_assert(sizeof(AGC_Dungeon_Frieze_C) == 0x0002B8, "Wrong size on AGC_Dungeon_Frieze_C");

}
