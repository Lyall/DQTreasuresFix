#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SkillPop_Count_00_Add

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SkillPop_Count_00_Add.W_SkillPop_Count_00_Add_C
// 0x0008 (0x04B0 - 0x04A8)
class UW_SkillPop_Count_00_Add_C final : public UUISkillPop_Count_00_Add
{
public:
	class UImage*                                 Count_00_Add;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SkillPop_Count_00_Add_C">();
	}
	static class UW_SkillPop_Count_00_Add_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SkillPop_Count_00_Add_C>();
	}
};
static_assert(alignof(UW_SkillPop_Count_00_Add_C) == 0x000008, "Wrong alignment on UW_SkillPop_Count_00_Add_C");
static_assert(sizeof(UW_SkillPop_Count_00_Add_C) == 0x0004B0, "Wrong size on UW_SkillPop_Count_00_Add_C");
static_assert(offsetof(UW_SkillPop_Count_00_Add_C, Count_00_Add) == 0x0004A8, "Member 'UW_SkillPop_Count_00_Add_C::Count_00_Add' has a wrong offset!");

}
