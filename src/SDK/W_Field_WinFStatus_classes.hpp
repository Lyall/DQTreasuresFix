#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_WinFStatus

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_WinFStatus.W_Field_WinFStatus_C
// 0x0130 (0x0778 - 0x0648)
class UW_Field_WinFStatus_C final : public UUIField_WinFStatus
{
public:
	class UWidgetAnimation*                       Default;                                           // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Base_in_1;                                         // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Cursor_Off;                                        // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Cursor_On;                                         // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Revive;                                            // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Dead;                                              // 0x0670(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Danger;                                            // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Damage;                                            // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Base_out;                                          // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Base_in;                                           // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Friend_Cursor_Add;                                 // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Friend_Cursor_Base;                                // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FriendGauge_C*                       GaugeHP;                                           // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_FriendGauge_C*                       GaugeMP;                                           // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_29;                                          // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Coffin;                                      // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Danger;                                      // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Dead;                                        // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Friend;                                      // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 revive_01;                                         // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Base;                                       // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Friend_0001;                           // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Friend_0002;                           // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Friend_0003;                           // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Friend_0004;                           // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_99;                                           // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_Hp;                                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_Hp_Gauge;                                     // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_Lv;                                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_MP;                                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_Mp_Gauge;                                     // 0x0738(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_NAME;                                         // 0x0740(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Sign_IconLvupStatus_C*               W_Field_Icon_Lvupstatus;                           // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Sign_IconLvup_C*                     W_Field_IconLvup;                                  // 0x0750(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              CloseFriendStatus;                                 // 0x0758(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OpenFriendStatus;                                  // 0x0768(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_WinFStatus_C">();
	}
	static class UW_Field_WinFStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_WinFStatus_C>();
	}
};
static_assert(alignof(UW_Field_WinFStatus_C) == 0x000008, "Wrong alignment on UW_Field_WinFStatus_C");
static_assert(sizeof(UW_Field_WinFStatus_C) == 0x000778, "Wrong size on UW_Field_WinFStatus_C");
static_assert(offsetof(UW_Field_WinFStatus_C, Default) == 0x000648, "Member 'UW_Field_WinFStatus_C::Default' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Base_in_1) == 0x000650, "Member 'UW_Field_WinFStatus_C::Base_in_1' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Cursor_Off) == 0x000658, "Member 'UW_Field_WinFStatus_C::Cursor_Off' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Cursor_On) == 0x000660, "Member 'UW_Field_WinFStatus_C::Cursor_On' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Revive) == 0x000668, "Member 'UW_Field_WinFStatus_C::Revive' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Dead) == 0x000670, "Member 'UW_Field_WinFStatus_C::Dead' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Danger) == 0x000678, "Member 'UW_Field_WinFStatus_C::Danger' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Damage) == 0x000680, "Member 'UW_Field_WinFStatus_C::Damage' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Base_out) == 0x000688, "Member 'UW_Field_WinFStatus_C::Base_out' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Base_in) == 0x000690, "Member 'UW_Field_WinFStatus_C::Base_in' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Friend_Cursor_Add) == 0x000698, "Member 'UW_Field_WinFStatus_C::Friend_Cursor_Add' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Friend_Cursor_Base) == 0x0006A0, "Member 'UW_Field_WinFStatus_C::Friend_Cursor_Base' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, GaugeHP) == 0x0006A8, "Member 'UW_Field_WinFStatus_C::GaugeHP' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, GaugeMP) == 0x0006B0, "Member 'UW_Field_WinFStatus_C::GaugeMP' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Image_29) == 0x0006B8, "Member 'UW_Field_WinFStatus_C::Image_29' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Image_Coffin) == 0x0006C0, "Member 'UW_Field_WinFStatus_C::Image_Coffin' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Image_Danger) == 0x0006C8, "Member 'UW_Field_WinFStatus_C::Image_Danger' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Image_Dead) == 0x0006D0, "Member 'UW_Field_WinFStatus_C::Image_Dead' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Image_Friend) == 0x0006D8, "Member 'UW_Field_WinFStatus_C::Image_Friend' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, revive_01) == 0x0006E0, "Member 'UW_Field_WinFStatus_C::revive_01' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Status_Base) == 0x0006E8, "Member 'UW_Field_WinFStatus_C::Status_Base' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Status_Icon_Friend_0001) == 0x0006F0, "Member 'UW_Field_WinFStatus_C::Status_Icon_Friend_0001' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Status_Icon_Friend_0002) == 0x0006F8, "Member 'UW_Field_WinFStatus_C::Status_Icon_Friend_0002' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Status_Icon_Friend_0003) == 0x000700, "Member 'UW_Field_WinFStatus_C::Status_Icon_Friend_0003' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Status_Icon_Friend_0004) == 0x000708, "Member 'UW_Field_WinFStatus_C::Status_Icon_Friend_0004' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_99) == 0x000710, "Member 'UW_Field_WinFStatus_C::Text_99' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_Hp) == 0x000718, "Member 'UW_Field_WinFStatus_C::Text_Hp' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_Hp_Gauge) == 0x000720, "Member 'UW_Field_WinFStatus_C::Text_Hp_Gauge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_Lv) == 0x000728, "Member 'UW_Field_WinFStatus_C::Text_Lv' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_MP) == 0x000730, "Member 'UW_Field_WinFStatus_C::Text_MP' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_Mp_Gauge) == 0x000738, "Member 'UW_Field_WinFStatus_C::Text_Mp_Gauge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, Text_NAME) == 0x000740, "Member 'UW_Field_WinFStatus_C::Text_NAME' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, W_Field_Icon_Lvupstatus) == 0x000748, "Member 'UW_Field_WinFStatus_C::W_Field_Icon_Lvupstatus' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, W_Field_IconLvup) == 0x000750, "Member 'UW_Field_WinFStatus_C::W_Field_IconLvup' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, CloseFriendStatus) == 0x000758, "Member 'UW_Field_WinFStatus_C::CloseFriendStatus' has a wrong offset!");
static_assert(offsetof(UW_Field_WinFStatus_C, OpenFriendStatus) == 0x000768, "Member 'UW_Field_WinFStatus_C::OpenFriendStatus' has a wrong offset!");

}
