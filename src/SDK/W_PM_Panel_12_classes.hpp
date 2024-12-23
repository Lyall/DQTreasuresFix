#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PM_Panel_12

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PM_Panel_12.W_PM_Panel_12_C
// 0x0078 (0x05B0 - 0x0538)
class UW_PM_Panel_12_C final : public UUIPartyMenu_PM_Panel_12
{
public:
	class UWidgetAnimation*                       Down;                                              // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Up;                                                // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Disp_HideEffect;                                   // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Disp_Normal;                                       // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       off;                                               // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow_Icon;                                        // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_Add;                                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_Base;                                       // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_42;                                          // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_68;                                          // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 line_1;                                            // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PM_Icon_00_C*                        W_PM_Icon_00;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PM_Panel_12_C">();
	}
	static class UW_PM_Panel_12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PM_Panel_12_C>();
	}
};
static_assert(alignof(UW_PM_Panel_12_C) == 0x000008, "Wrong alignment on UW_PM_Panel_12_C");
static_assert(sizeof(UW_PM_Panel_12_C) == 0x0005B0, "Wrong size on UW_PM_Panel_12_C");
static_assert(offsetof(UW_PM_Panel_12_C, Down) == 0x000538, "Member 'UW_PM_Panel_12_C::Down' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Up) == 0x000540, "Member 'UW_PM_Panel_12_C::Up' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Disp_HideEffect) == 0x000548, "Member 'UW_PM_Panel_12_C::Disp_HideEffect' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Disp_Normal) == 0x000550, "Member 'UW_PM_Panel_12_C::Disp_Normal' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, off) == 0x000558, "Member 'UW_PM_Panel_12_C::off' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Wait) == 0x000560, "Member 'UW_PM_Panel_12_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, on) == 0x000568, "Member 'UW_PM_Panel_12_C::on' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Arrow_Icon) == 0x000570, "Member 'UW_PM_Panel_12_C::Arrow_Icon' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Cursor_Add) == 0x000578, "Member 'UW_PM_Panel_12_C::Cursor_Add' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Cursor_Base) == 0x000580, "Member 'UW_PM_Panel_12_C::Cursor_Base' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Image_0) == 0x000588, "Member 'UW_PM_Panel_12_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Image_42) == 0x000590, "Member 'UW_PM_Panel_12_C::Image_42' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, Image_68) == 0x000598, "Member 'UW_PM_Panel_12_C::Image_68' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, line_1) == 0x0005A0, "Member 'UW_PM_Panel_12_C::line_1' has a wrong offset!");
static_assert(offsetof(UW_PM_Panel_12_C, W_PM_Icon_00) == 0x0005A8, "Member 'UW_PM_Panel_12_C::W_PM_Icon_00' has a wrong offset!");

}

