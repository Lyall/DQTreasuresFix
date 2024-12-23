#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SkillName

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SkillName.W_SkillName_C
// 0x0030 (0x0630 - 0x0600)
class UW_SkillName_C final : public UUISkillName
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IconBase_01;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBase_02;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatesIcon_01;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatesIcon_02;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SkillName_C">();
	}
	static class UW_SkillName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SkillName_C>();
	}
};
static_assert(alignof(UW_SkillName_C) == 0x000010, "Wrong alignment on UW_SkillName_C");
static_assert(sizeof(UW_SkillName_C) == 0x000630, "Wrong size on UW_SkillName_C");
static_assert(offsetof(UW_SkillName_C, Out) == 0x000600, "Member 'UW_SkillName_C::Out' has a wrong offset!");
static_assert(offsetof(UW_SkillName_C, In) == 0x000608, "Member 'UW_SkillName_C::In' has a wrong offset!");
static_assert(offsetof(UW_SkillName_C, IconBase_01) == 0x000610, "Member 'UW_SkillName_C::IconBase_01' has a wrong offset!");
static_assert(offsetof(UW_SkillName_C, IconBase_02) == 0x000618, "Member 'UW_SkillName_C::IconBase_02' has a wrong offset!");
static_assert(offsetof(UW_SkillName_C, StatesIcon_01) == 0x000620, "Member 'UW_SkillName_C::StatesIcon_01' has a wrong offset!");
static_assert(offsetof(UW_SkillName_C, StatesIcon_02) == 0x000628, "Member 'UW_SkillName_C::StatesIcon_02' has a wrong offset!");

}

