#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BossHPGauge

#include "Basic.hpp"

#include "W_GaugeBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_BossHPGauge.W_BossHPGauge_C
// 0x0018 (0x0508 - 0x04F0)
class UW_BossHPGauge_C final : public UW_GaugeBase_C
{
public:
	class UWidgetAnimation*                       NewAnimation;                                      // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Pc_HPMPGauge_1;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pc_HPMPGauge_Damage_1;                             // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_BossHPGauge_C">();
	}
	static class UW_BossHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_BossHPGauge_C>();
	}
};
static_assert(alignof(UW_BossHPGauge_C) == 0x000008, "Wrong alignment on UW_BossHPGauge_C");
static_assert(sizeof(UW_BossHPGauge_C) == 0x000508, "Wrong size on UW_BossHPGauge_C");
static_assert(offsetof(UW_BossHPGauge_C, NewAnimation) == 0x0004F0, "Member 'UW_BossHPGauge_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_BossHPGauge_C, Pc_HPMPGauge_1) == 0x0004F8, "Member 'UW_BossHPGauge_C::Pc_HPMPGauge_1' has a wrong offset!");
static_assert(offsetof(UW_BossHPGauge_C, Pc_HPMPGauge_Damage_1) == 0x000500, "Member 'UW_BossHPGauge_C::Pc_HPMPGauge_Damage_1' has a wrong offset!");

}
