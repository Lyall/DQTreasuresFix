#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_IconChoice

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_IconChoice.W_IconChoice_C
// 0x0068 (0x05B0 - 0x0548)
class UW_IconChoice_C final : public UUIIconChoice
{
public:
	class UWidgetAnimation*                       Gray_Out_Off;                                      // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Gray_Out_On;                                       // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Icon_off;                                          // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Icon_On;                                           // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       off;                                               // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x0570(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           arrow;                                             // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceBase_01;                                     // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceBase_02;                                     // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceBase_Additive;                               // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChoiceFrame;                                       // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon___01;                                         // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCanvasPanel* GetArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_IconChoice_C">();
	}
	static class UW_IconChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_IconChoice_C>();
	}
};
static_assert(alignof(UW_IconChoice_C) == 0x000008, "Wrong alignment on UW_IconChoice_C");
static_assert(sizeof(UW_IconChoice_C) == 0x0005B0, "Wrong size on UW_IconChoice_C");
static_assert(offsetof(UW_IconChoice_C, Gray_Out_Off) == 0x000548, "Member 'UW_IconChoice_C::Gray_Out_Off' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, Gray_Out_On) == 0x000550, "Member 'UW_IconChoice_C::Gray_Out_On' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, Icon_off) == 0x000558, "Member 'UW_IconChoice_C::Icon_off' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, Icon_On) == 0x000560, "Member 'UW_IconChoice_C::Icon_On' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, off) == 0x000568, "Member 'UW_IconChoice_C::off' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, Wait) == 0x000570, "Member 'UW_IconChoice_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, on) == 0x000578, "Member 'UW_IconChoice_C::on' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, arrow) == 0x000580, "Member 'UW_IconChoice_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, ChoiceBase_01) == 0x000588, "Member 'UW_IconChoice_C::ChoiceBase_01' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, ChoiceBase_02) == 0x000590, "Member 'UW_IconChoice_C::ChoiceBase_02' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, ChoiceBase_Additive) == 0x000598, "Member 'UW_IconChoice_C::ChoiceBase_Additive' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, ChoiceFrame) == 0x0005A0, "Member 'UW_IconChoice_C::ChoiceFrame' has a wrong offset!");
static_assert(offsetof(UW_IconChoice_C, Icon___01) == 0x0005A8, "Member 'UW_IconChoice_C::Icon___01' has a wrong offset!");

}
