#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Panel_CoinDetail

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Panel_CoinDetail.W_Panel_CoinDetail_C
// 0x0068 (0x05C8 - 0x0560)
class UW_Panel_CoinDetail_C final : public UUIPanel_CoinDetail
{
public:
	class UWidgetAnimation*                       off;                                               // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 A_Arrow;                                           // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Blank;                                             // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_1;                                            // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 line_1;                                            // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 line_2;                                            // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PM_CoinStates_03;                                  // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PM_CoinStates_04;                                  // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rank_Icon;                                         // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PM_Icon_00_C*                        W_PM_Icon_00;                                      // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SideScrollTextWidget_C*              W_SideScrollTextWidget_1;                          // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SideScrollTextWidget_C*              W_SideScrollTextWidget_2;                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Panel_CoinDetail_C">();
	}
	static class UW_Panel_CoinDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Panel_CoinDetail_C>();
	}
};
static_assert(alignof(UW_Panel_CoinDetail_C) == 0x000008, "Wrong alignment on UW_Panel_CoinDetail_C");
static_assert(sizeof(UW_Panel_CoinDetail_C) == 0x0005C8, "Wrong size on UW_Panel_CoinDetail_C");
static_assert(offsetof(UW_Panel_CoinDetail_C, off) == 0x000560, "Member 'UW_Panel_CoinDetail_C::off' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, Normal) == 0x000568, "Member 'UW_Panel_CoinDetail_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, A_Arrow) == 0x000570, "Member 'UW_Panel_CoinDetail_C::A_Arrow' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, Blank) == 0x000578, "Member 'UW_Panel_CoinDetail_C::Blank' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, Icon_1) == 0x000580, "Member 'UW_Panel_CoinDetail_C::Icon_1' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, line_1) == 0x000588, "Member 'UW_Panel_CoinDetail_C::line_1' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, line_2) == 0x000590, "Member 'UW_Panel_CoinDetail_C::line_2' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, PM_CoinStates_03) == 0x000598, "Member 'UW_Panel_CoinDetail_C::PM_CoinStates_03' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, PM_CoinStates_04) == 0x0005A0, "Member 'UW_Panel_CoinDetail_C::PM_CoinStates_04' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, Rank_Icon) == 0x0005A8, "Member 'UW_Panel_CoinDetail_C::Rank_Icon' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, W_PM_Icon_00) == 0x0005B0, "Member 'UW_Panel_CoinDetail_C::W_PM_Icon_00' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, W_SideScrollTextWidget_1) == 0x0005B8, "Member 'UW_Panel_CoinDetail_C::W_SideScrollTextWidget_1' has a wrong offset!");
static_assert(offsetof(UW_Panel_CoinDetail_C, W_SideScrollTextWidget_2) == 0x0005C0, "Member 'UW_Panel_CoinDetail_C::W_SideScrollTextWidget_2' has a wrong offset!");

}
