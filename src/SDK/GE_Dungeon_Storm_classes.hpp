#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Dungeon_Storm

#include "Basic.hpp"

#include "GE_Storm_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Dungeon_Storm.GE_Dungeon_Storm_C
// 0x0000 (0x07C8 - 0x07C8)
class UGE_Dungeon_Storm_C final : public UGE_Storm_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Dungeon_Storm_C">();
	}
	static class UGE_Dungeon_Storm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Dungeon_Storm_C>();
	}
};
static_assert(alignof(UGE_Dungeon_Storm_C) == 0x000008, "Wrong alignment on UGE_Dungeon_Storm_C");
static_assert(sizeof(UGE_Dungeon_Storm_C) == 0x0007C8, "Wrong size on UGE_Dungeon_Storm_C");

}
