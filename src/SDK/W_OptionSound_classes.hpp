#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_OptionSound

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_OptionSound.W_OptionSound_C
// 0x0060 (0x0668 - 0x0608)
class UW_OptionSound_C final : public UUIOptionSound
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Commonmenu_WinLine_A;                              // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Commonmenu_WinLine_B;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Commonmenu_WinLine_C;                              // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PM_ListBG;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Commonmenu_OptionChoiceBase_00_C*    W_Commonmenu_OptionChoiceBase_00_D01;              // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Commonmenu_OptionChoiceBase_00_C*    W_Commonmenu_OptionChoiceBase_00_D02;              // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_IconArrow_C*                    W_Menu_IconArrow;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Volume_01_C*                         W_Volume_A01;                                      // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Volume_01_C*                         W_Volume_B01;                                      // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Volume_01_C*                         W_Volume_C01;                                      // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_OptionSound_C">();
	}
	static class UW_OptionSound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_OptionSound_C>();
	}
};
static_assert(alignof(UW_OptionSound_C) == 0x000008, "Wrong alignment on UW_OptionSound_C");
static_assert(sizeof(UW_OptionSound_C) == 0x000668, "Wrong size on UW_OptionSound_C");
static_assert(offsetof(UW_OptionSound_C, Out) == 0x000608, "Member 'UW_OptionSound_C::Out' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, In) == 0x000610, "Member 'UW_OptionSound_C::In' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, Commonmenu_WinLine_A) == 0x000618, "Member 'UW_OptionSound_C::Commonmenu_WinLine_A' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, Commonmenu_WinLine_B) == 0x000620, "Member 'UW_OptionSound_C::Commonmenu_WinLine_B' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, Commonmenu_WinLine_C) == 0x000628, "Member 'UW_OptionSound_C::Commonmenu_WinLine_C' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, PM_ListBG) == 0x000630, "Member 'UW_OptionSound_C::PM_ListBG' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Commonmenu_OptionChoiceBase_00_D01) == 0x000638, "Member 'UW_OptionSound_C::W_Commonmenu_OptionChoiceBase_00_D01' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Commonmenu_OptionChoiceBase_00_D02) == 0x000640, "Member 'UW_OptionSound_C::W_Commonmenu_OptionChoiceBase_00_D02' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Menu_IconArrow) == 0x000648, "Member 'UW_OptionSound_C::W_Menu_IconArrow' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Volume_A01) == 0x000650, "Member 'UW_OptionSound_C::W_Volume_A01' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Volume_B01) == 0x000658, "Member 'UW_OptionSound_C::W_Volume_B01' has a wrong offset!");
static_assert(offsetof(UW_OptionSound_C, W_Volume_C01) == 0x000660, "Member 'UW_OptionSound_C::W_Volume_C01' has a wrong offset!");

}
