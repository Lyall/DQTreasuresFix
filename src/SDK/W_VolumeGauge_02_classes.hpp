#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VolumeGauge_02

#include "Basic.hpp"

#include "W_BossGauge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_VolumeGauge_02.W_VolumeGauge_02_C
// 0x0020 (0x0538 - 0x0518)
class UW_VolumeGauge_02_C final : public UW_BossGauge_C
{
public:
	class UWidgetAnimation*                       GaugeMove;                                         // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Setting_Gauge_01;                                  // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Setting_Gauge_02;                                  // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Setting_Gauge_03;                                  // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_VolumeGauge_02_C">();
	}
	static class UW_VolumeGauge_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_VolumeGauge_02_C>();
	}
};
static_assert(alignof(UW_VolumeGauge_02_C) == 0x000008, "Wrong alignment on UW_VolumeGauge_02_C");
static_assert(sizeof(UW_VolumeGauge_02_C) == 0x000538, "Wrong size on UW_VolumeGauge_02_C");
static_assert(offsetof(UW_VolumeGauge_02_C, GaugeMove) == 0x000518, "Member 'UW_VolumeGauge_02_C::GaugeMove' has a wrong offset!");
static_assert(offsetof(UW_VolumeGauge_02_C, Setting_Gauge_01) == 0x000520, "Member 'UW_VolumeGauge_02_C::Setting_Gauge_01' has a wrong offset!");
static_assert(offsetof(UW_VolumeGauge_02_C, Setting_Gauge_02) == 0x000528, "Member 'UW_VolumeGauge_02_C::Setting_Gauge_02' has a wrong offset!");
static_assert(offsetof(UW_VolumeGauge_02_C, Setting_Gauge_03) == 0x000530, "Member 'UW_VolumeGauge_02_C::Setting_Gauge_03' has a wrong offset!");

}
