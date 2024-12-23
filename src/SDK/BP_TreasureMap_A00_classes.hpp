#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TreasureMap_A00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TreasureMap_A00.BP_TreasureMap_A00_C
// 0x0008 (0x0348 - 0x0340)
class ABP_TreasureMap_A00_C final : public ATreasureMapObjectBase
{
public:
	class UObjectReactionDefaultComponent*        ObjectReactionDefault;                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureMap_A00_C">();
	}
	static class ABP_TreasureMap_A00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureMap_A00_C>();
	}
};
static_assert(alignof(ABP_TreasureMap_A00_C) == 0x000008, "Wrong alignment on ABP_TreasureMap_A00_C");
static_assert(sizeof(ABP_TreasureMap_A00_C) == 0x000348, "Wrong size on ABP_TreasureMap_A00_C");
static_assert(offsetof(ABP_TreasureMap_A00_C, ObjectReactionDefault) == 0x000340, "Member 'ABP_TreasureMap_A00_C::ObjectReactionDefault' has a wrong offset!");

}

