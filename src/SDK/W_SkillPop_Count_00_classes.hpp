#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SkillPop_Count_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SkillPop_Count_00.W_SkillPop_Count_00_C
// 0x0008 (0x04A0 - 0x0498)
class UW_SkillPop_Count_00_C final : public UUISkillPop_Count_00
{
public:
	class UImage*                                 Count_00;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SkillPop_Count_00_C">();
	}
	static class UW_SkillPop_Count_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SkillPop_Count_00_C>();
	}
};
static_assert(alignof(UW_SkillPop_Count_00_C) == 0x000008, "Wrong alignment on UW_SkillPop_Count_00_C");
static_assert(sizeof(UW_SkillPop_Count_00_C) == 0x0004A0, "Wrong size on UW_SkillPop_Count_00_C");
static_assert(offsetof(UW_SkillPop_Count_00_C, Count_00) == 0x000498, "Member 'UW_SkillPop_Count_00_C::Count_00' has a wrong offset!");

}
