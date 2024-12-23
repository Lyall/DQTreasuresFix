#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FieldActionGauge

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FieldActionGauge.W_FieldActionGauge_C
// 0x0060 (0x0578 - 0x0518)
class UW_FieldActionGauge_C final : public UUIFieldActionGauge
{
public:
	class UWidgetAnimation*                       HealEffect;                                        // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GaugePress;                                        // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FullFlash;                                         // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GaugeAnim;                                         // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Effect_01;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect_02;                                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect_03;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect_04;                                         // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FieldActionGause;                                  // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FieldActionGause_Add;                              // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash;                                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_101;                                         // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FieldActionGauge_C">();
	}
	static class UW_FieldActionGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FieldActionGauge_C>();
	}
};
static_assert(alignof(UW_FieldActionGauge_C) == 0x000008, "Wrong alignment on UW_FieldActionGauge_C");
static_assert(sizeof(UW_FieldActionGauge_C) == 0x000578, "Wrong size on UW_FieldActionGauge_C");
static_assert(offsetof(UW_FieldActionGauge_C, HealEffect) == 0x000518, "Member 'UW_FieldActionGauge_C::HealEffect' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, GaugePress) == 0x000520, "Member 'UW_FieldActionGauge_C::GaugePress' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, FullFlash) == 0x000528, "Member 'UW_FieldActionGauge_C::FullFlash' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, GaugeAnim) == 0x000530, "Member 'UW_FieldActionGauge_C::GaugeAnim' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Effect_01) == 0x000538, "Member 'UW_FieldActionGauge_C::Effect_01' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Effect_02) == 0x000540, "Member 'UW_FieldActionGauge_C::Effect_02' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Effect_03) == 0x000548, "Member 'UW_FieldActionGauge_C::Effect_03' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Effect_04) == 0x000550, "Member 'UW_FieldActionGauge_C::Effect_04' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, FieldActionGause) == 0x000558, "Member 'UW_FieldActionGauge_C::FieldActionGause' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, FieldActionGause_Add) == 0x000560, "Member 'UW_FieldActionGauge_C::FieldActionGause_Add' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Flash) == 0x000568, "Member 'UW_FieldActionGauge_C::Flash' has a wrong offset!");
static_assert(offsetof(UW_FieldActionGauge_C, Image_101) == 0x000570, "Member 'UW_FieldActionGauge_C::Image_101' has a wrong offset!");

}

