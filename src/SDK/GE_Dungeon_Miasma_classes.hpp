#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Dungeon_Miasma

#include "Basic.hpp"

#include "GE_Poison_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Dungeon_Miasma.GE_Dungeon_Miasma_C
// 0x0000 (0x07C8 - 0x07C8)
class UGE_Dungeon_Miasma_C final : public UGE_Poison_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Dungeon_Miasma_C">();
	}
	static class UGE_Dungeon_Miasma_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Dungeon_Miasma_C>();
	}
};
static_assert(alignof(UGE_Dungeon_Miasma_C) == 0x000008, "Wrong alignment on UGE_Dungeon_Miasma_C");
static_assert(sizeof(UGE_Dungeon_Miasma_C) == 0x0007C8, "Wrong size on UGE_Dungeon_Miasma_C");

}

