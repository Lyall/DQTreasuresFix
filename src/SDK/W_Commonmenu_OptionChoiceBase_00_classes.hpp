#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Commonmenu_OptionChoiceBase_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Commonmenu_OptionChoiceBase_00.W_Commonmenu_OptionChoiceBase_00_C
// 0x0050 (0x05A8 - 0x0558)
class UW_Commonmenu_OptionChoiceBase_00_C final : public UUICommonmenu_OptionChoiceBase_00
{
public:
	class UWidgetAnimation*                       Nomal;                                             // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_W_Commonmenu_OptionChoiceBase_00_C;         // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       off;                                               // 0x0570(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           arrow;                                             // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_01;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_02;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceBase_Additive;                               // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceFrame;                                       // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Commonmenu_OptionChoiceBase_00_C">();
	}
	static class UW_Commonmenu_OptionChoiceBase_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Commonmenu_OptionChoiceBase_00_C>();
	}
};
static_assert(alignof(UW_Commonmenu_OptionChoiceBase_00_C) == 0x000008, "Wrong alignment on UW_Commonmenu_OptionChoiceBase_00_C");
static_assert(sizeof(UW_Commonmenu_OptionChoiceBase_00_C) == 0x0005A8, "Wrong size on UW_Commonmenu_OptionChoiceBase_00_C");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, Nomal) == 0x000558, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::Nomal' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, Select_W_Commonmenu_OptionChoiceBase_00_C) == 0x000560, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::Select_W_Commonmenu_OptionChoiceBase_00_C' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, Wait) == 0x000568, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, off) == 0x000570, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::off' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, on) == 0x000578, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::on' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, arrow) == 0x000580, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, Base_01) == 0x000588, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::Base_01' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, Base_02) == 0x000590, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::Base_02' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, ChoiceBase_Additive) == 0x000598, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::ChoiceBase_Additive' has a wrong offset!");
static_assert(offsetof(UW_Commonmenu_OptionChoiceBase_00_C, ChoiceFrame) == 0x0005A0, "Member 'UW_Commonmenu_OptionChoiceBase_00_C::ChoiceFrame' has a wrong offset!");

}
