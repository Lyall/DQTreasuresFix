#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_WinBoss

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_WinBoss.W_Field_WinBoss_C
// 0x0048 (0x0590 - 0x0548)
class UW_Field_WinBoss_C final : public UUIField_WinBoss
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 NameBase;                                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Boss_0001;                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Boss_0002;                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Boss_0003;                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Boss_0004;                             // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BossHPGauge_C*                       W_BossHPGauge;                                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spirit_Gauge_Boss_C*                 W_Spirit_Gauge_Boss;                               // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_WinBoss_C">();
	}
	static class UW_Field_WinBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_WinBoss_C>();
	}
};
static_assert(alignof(UW_Field_WinBoss_C) == 0x000008, "Wrong alignment on UW_Field_WinBoss_C");
static_assert(sizeof(UW_Field_WinBoss_C) == 0x000590, "Wrong size on UW_Field_WinBoss_C");
static_assert(offsetof(UW_Field_WinBoss_C, Out) == 0x000548, "Member 'UW_Field_WinBoss_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, In) == 0x000550, "Member 'UW_Field_WinBoss_C::In' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, NameBase) == 0x000558, "Member 'UW_Field_WinBoss_C::NameBase' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, Status_Icon_Boss_0001) == 0x000560, "Member 'UW_Field_WinBoss_C::Status_Icon_Boss_0001' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, Status_Icon_Boss_0002) == 0x000568, "Member 'UW_Field_WinBoss_C::Status_Icon_Boss_0002' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, Status_Icon_Boss_0003) == 0x000570, "Member 'UW_Field_WinBoss_C::Status_Icon_Boss_0003' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, Status_Icon_Boss_0004) == 0x000578, "Member 'UW_Field_WinBoss_C::Status_Icon_Boss_0004' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, W_BossHPGauge) == 0x000580, "Member 'UW_Field_WinBoss_C::W_BossHPGauge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinBoss_C, W_Spirit_Gauge_Boss) == 0x000588, "Member 'UW_Field_WinBoss_C::W_Spirit_Gauge_Boss' has a wrong offset!");

}
