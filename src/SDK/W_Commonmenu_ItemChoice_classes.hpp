#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Commonmenu_ItemChoice

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Commonmenu_ItemChoice.W_Commonmenu_ItemChoice_C
// 0x0070 (0x0600 - 0x0590)
class UW_Commonmenu_ItemChoice_C final : public UUICommonmenu_ItemChoice
{
public:
	class UWidgetAnimation*                       In;                                                // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       off;                                               // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           arrow;                                             // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CheckIcon;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Drop;                                              // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Commonmenu_ItemIcon_C*               ItemIcon_00;                                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Commonmenu_ItemIconFrame_C*          ItemIconFrame_00;                                  // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockIcon;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MotivationUP_Icon;                                 // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewIcon;                                           // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Treasure_SetIcon;                                  // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TypeIcon;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Itemmenu_HoldIcon_C*                 W_Itemmenu_HoldIcon;                               // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCanvasPanel* GetArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Commonmenu_ItemChoice_C">();
	}
	static class UW_Commonmenu_ItemChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Commonmenu_ItemChoice_C>();
	}
};
static_assert(alignof(UW_Commonmenu_ItemChoice_C) == 0x000008, "Wrong alignment on UW_Commonmenu_ItemChoice_C");
static_assert(sizeof(UW_Commonmenu_ItemChoice_C) == 0x000600, "Wrong size on UW_Commonmenu_ItemChoice_C");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, In) == 0x000590, "Member 'UW_Commonmenu_ItemChoice_C::In' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, off) == 0x000598, "Member 'UW_Commonmenu_ItemChoice_C::off' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, on) == 0x0005A0, "Member 'UW_Commonmenu_ItemChoice_C::on' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, arrow) == 0x0005A8, "Member 'UW_Commonmenu_ItemChoice_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, CheckIcon) == 0x0005B0, "Member 'UW_Commonmenu_ItemChoice_C::CheckIcon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, Drop) == 0x0005B8, "Member 'UW_Commonmenu_ItemChoice_C::Drop' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, ItemIcon_00) == 0x0005C0, "Member 'UW_Commonmenu_ItemChoice_C::ItemIcon_00' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, ItemIconFrame_00) == 0x0005C8, "Member 'UW_Commonmenu_ItemChoice_C::ItemIconFrame_00' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, LockIcon) == 0x0005D0, "Member 'UW_Commonmenu_ItemChoice_C::LockIcon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, MotivationUP_Icon) == 0x0005D8, "Member 'UW_Commonmenu_ItemChoice_C::MotivationUP_Icon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, NewIcon) == 0x0005E0, "Member 'UW_Commonmenu_ItemChoice_C::NewIcon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, Treasure_SetIcon) == 0x0005E8, "Member 'UW_Commonmenu_ItemChoice_C::Treasure_SetIcon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, TypeIcon) == 0x0005F0, "Member 'UW_Commonmenu_ItemChoice_C::TypeIcon' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_ItemChoice_C, W_Itemmenu_HoldIcon) == 0x0005F8, "Member 'UW_Commonmenu_ItemChoice_C::W_Itemmenu_HoldIcon' has a wrong offset!");

}

