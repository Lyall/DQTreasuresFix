#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_WinLink

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_WinLink.W_Field_WinLink_C
// 0x0050 (0x05A0 - 0x0550)
class alignas(0x10) UW_Field_WinLink_C final : public UUIField_WinLink
{
public:
	class UWidgetAnimation*                       No_Use;                                            // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Use;                                               // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       No_Icon;                                           // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Disabled;                                          // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0570(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Charge;                                            // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Flash_Add;                                         // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material_MonsterIcon;                              // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material_Recast;                                   // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_WinLink_C">();
	}
	static class UW_Field_WinLink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_WinLink_C>();
	}
};
static_assert(alignof(UW_Field_WinLink_C) == 0x000010, "Wrong alignment on UW_Field_WinLink_C");
static_assert(sizeof(UW_Field_WinLink_C) == 0x0005A0, "Wrong size on UW_Field_WinLink_C");
static_assert(offsetof(UW_Field_WinLink_C, No_Use) == 0x000550, "Member 'UW_Field_WinLink_C::No_Use' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Use) == 0x000558, "Member 'UW_Field_WinLink_C::Use' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, No_Icon) == 0x000560, "Member 'UW_Field_WinLink_C::No_Icon' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Disabled) == 0x000568, "Member 'UW_Field_WinLink_C::Disabled' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Normal) == 0x000570, "Member 'UW_Field_WinLink_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Charge) == 0x000578, "Member 'UW_Field_WinLink_C::Charge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Flash_Add) == 0x000580, "Member 'UW_Field_WinLink_C::Flash_Add' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Material_MonsterIcon) == 0x000588, "Member 'UW_Field_WinLink_C::Material_MonsterIcon' has a wrong offset!");
static_assert(offsetof(UW_Field_WinLink_C, Material_Recast) == 0x000590, "Member 'UW_Field_WinLink_C::Material_Recast' has a wrong offset!");

}
