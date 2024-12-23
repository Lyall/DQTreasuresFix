#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Shot_IconBullet

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Shot_IconBullet.W_Shot_IconBullet_C
// 0x0058 (0x05F0 - 0x0598)
class UW_Shot_IconBullet_C final : public UUIShot_IconBullet
{
public:
	class UWidgetAnimation*                       Off_Select;                                        // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Accept;                                            // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Off_Group;                                         // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Off_Category;                                      // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base_01;                                           // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_02;                                           // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_03;                                           // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item;                                              // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Number;                                            // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select_Base;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Shot_IconBullet_C">();
	}
	static class UW_Shot_IconBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Shot_IconBullet_C>();
	}
};
static_assert(alignof(UW_Shot_IconBullet_C) == 0x000008, "Wrong alignment on UW_Shot_IconBullet_C");
static_assert(sizeof(UW_Shot_IconBullet_C) == 0x0005F0, "Wrong size on UW_Shot_IconBullet_C");
static_assert(offsetof(UW_Shot_IconBullet_C, Off_Select) == 0x000598, "Member 'UW_Shot_IconBullet_C::Off_Select' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Accept) == 0x0005A0, "Member 'UW_Shot_IconBullet_C::Accept' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Off_Group) == 0x0005A8, "Member 'UW_Shot_IconBullet_C::Off_Group' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Off_Category) == 0x0005B0, "Member 'UW_Shot_IconBullet_C::Off_Category' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, on) == 0x0005B8, "Member 'UW_Shot_IconBullet_C::on' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Base_01) == 0x0005C0, "Member 'UW_Shot_IconBullet_C::Base_01' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Base_02) == 0x0005C8, "Member 'UW_Shot_IconBullet_C::Base_02' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Base_03) == 0x0005D0, "Member 'UW_Shot_IconBullet_C::Base_03' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Item) == 0x0005D8, "Member 'UW_Shot_IconBullet_C::Item' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Number) == 0x0005E0, "Member 'UW_Shot_IconBullet_C::Number' has a wrong offset!");
static_assert(offsetof(UW_Shot_IconBullet_C, Select_Base) == 0x0005E8, "Member 'UW_Shot_IconBullet_C::Select_Base' has a wrong offset!");

}

