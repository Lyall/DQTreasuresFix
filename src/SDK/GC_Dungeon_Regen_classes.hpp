#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Dungeon_Regen

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Dungeon_Regen.GC_Dungeon_Regen_C
// 0x0008 (0x02B0 - 0x02A8)
class AGC_Dungeon_Regen_C final : public ADarwinGameplayCue
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Dungeon_Regen_C">();
	}
	static class AGC_Dungeon_Regen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Dungeon_Regen_C>();
	}
};
static_assert(alignof(AGC_Dungeon_Regen_C) == 0x000008, "Wrong alignment on AGC_Dungeon_Regen_C");
static_assert(sizeof(AGC_Dungeon_Regen_C) == 0x0002B0, "Wrong size on AGC_Dungeon_Regen_C");
static_assert(offsetof(AGC_Dungeon_Regen_C, DefaultSceneRoot) == 0x0002A8, "Member 'AGC_Dungeon_Regen_C::DefaultSceneRoot' has a wrong offset!");

}

