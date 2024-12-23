#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Drop_Panel_01

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Drop_Panel_01.W_Drop_Panel_01_C
// 0x0030 (0x04C0 - 0x0490)
class UW_Drop_Panel_01_C final : public UUIDrop_Panel_01
{
public:
	class UWidgetAnimation*                       Short_Pos;                                         // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_Pos;                                        // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GrayOut;                                           // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x04A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DropRank_Icon;                                     // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GrayOut_Panel;                                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Drop_Panel_01_C">();
	}
	static class UW_Drop_Panel_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Drop_Panel_01_C>();
	}
};
static_assert(alignof(UW_Drop_Panel_01_C) == 0x000008, "Wrong alignment on UW_Drop_Panel_01_C");
static_assert(sizeof(UW_Drop_Panel_01_C) == 0x0004C0, "Wrong size on UW_Drop_Panel_01_C");
static_assert(offsetof(UW_Drop_Panel_01_C, Short_Pos) == 0x000490, "Member 'UW_Drop_Panel_01_C::Short_Pos' has a wrong offset!");
static_assert(offsetof(UW_Drop_Panel_01_C, Normal_Pos) == 0x000498, "Member 'UW_Drop_Panel_01_C::Normal_Pos' has a wrong offset!");
static_assert(offsetof(UW_Drop_Panel_01_C, GrayOut) == 0x0004A0, "Member 'UW_Drop_Panel_01_C::GrayOut' has a wrong offset!");
static_assert(offsetof(UW_Drop_Panel_01_C, Normal) == 0x0004A8, "Member 'UW_Drop_Panel_01_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_Drop_Panel_01_C, DropRank_Icon) == 0x0004B0, "Member 'UW_Drop_Panel_01_C::DropRank_Icon' has a wrong offset!");
static_assert(offsetof(UW_Drop_Panel_01_C, GrayOut_Panel) == 0x0004B8, "Member 'UW_Drop_Panel_01_C::GrayOut_Panel' has a wrong offset!");

}

