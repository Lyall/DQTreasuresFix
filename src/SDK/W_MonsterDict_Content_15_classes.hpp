#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MonsterDict_Content_15

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MonsterDict_Content_15.W_MonsterDict_Content_15_C
// 0x0010 (0x04C0 - 0x04B0)
class UW_MonsterDict_Content_15_C final : public UUIMonsterDict_Content_15
{
public:
	class UW_MonsterDict_Content_13_C*            W_MonsterDict_Content_13;                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MonsterDict_Content_14_C*            W_MonsterDict_Content_14;                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MonsterDict_Content_15_C">();
	}
	static class UW_MonsterDict_Content_15_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MonsterDict_Content_15_C>();
	}
};
static_assert(alignof(UW_MonsterDict_Content_15_C) == 0x000008, "Wrong alignment on UW_MonsterDict_Content_15_C");
static_assert(sizeof(UW_MonsterDict_Content_15_C) == 0x0004C0, "Wrong size on UW_MonsterDict_Content_15_C");
static_assert(offsetof(UW_MonsterDict_Content_15_C, W_MonsterDict_Content_13) == 0x0004B0, "Member 'UW_MonsterDict_Content_15_C::W_MonsterDict_Content_13' has a wrong offset!");
static_assert(offsetof(UW_MonsterDict_Content_15_C, W_MonsterDict_Content_14) == 0x0004B8, "Member 'UW_MonsterDict_Content_15_C::W_MonsterDict_Content_14' has a wrong offset!");

}

