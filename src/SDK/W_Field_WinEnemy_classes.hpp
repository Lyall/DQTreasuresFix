#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_WinEnemy

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_WinEnemy.W_Field_WinEnemy_C
// 0x0070 (0x06D0 - 0x0660)
class UW_Field_WinEnemy_C final : public UUIField_WinEnemy
{
public:
	class UWidgetAnimation*                       Spirit_Off;                                        // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Spirit_On;                                         // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Base;                                              // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Enemy_0001;                            // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Enemy_0002;                            // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Enemy_0003;                            // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Status_Icon_Enemy_0004;                            // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_Lv;                                           // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAutoTextBlock*                         Text_NAME;                                         // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_EnemyGauge_C*                        W_EnemyGauge;                                      // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spirit_Gauge_C*                      W_Spirit_Gauge;                                    // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HP;                                                // 0x06BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHP;                                             // 0x06C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_WinEnemy_C">();
	}
	static class UW_Field_WinEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_WinEnemy_C>();
	}
};
static_assert(alignof(UW_Field_WinEnemy_C) == 0x000010, "Wrong alignment on UW_Field_WinEnemy_C");
static_assert(sizeof(UW_Field_WinEnemy_C) == 0x0006D0, "Wrong size on UW_Field_WinEnemy_C");
static_assert(offsetof(UW_Field_WinEnemy_C, Spirit_Off) == 0x000660, "Member 'UW_Field_WinEnemy_C::Spirit_Off' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Spirit_On) == 0x000668, "Member 'UW_Field_WinEnemy_C::Spirit_On' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Base) == 0x000670, "Member 'UW_Field_WinEnemy_C::Base' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Status_Icon_Enemy_0001) == 0x000678, "Member 'UW_Field_WinEnemy_C::Status_Icon_Enemy_0001' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Status_Icon_Enemy_0002) == 0x000680, "Member 'UW_Field_WinEnemy_C::Status_Icon_Enemy_0002' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Status_Icon_Enemy_0003) == 0x000688, "Member 'UW_Field_WinEnemy_C::Status_Icon_Enemy_0003' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Status_Icon_Enemy_0004) == 0x000690, "Member 'UW_Field_WinEnemy_C::Status_Icon_Enemy_0004' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Text_Lv) == 0x000698, "Member 'UW_Field_WinEnemy_C::Text_Lv' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Text_NAME) == 0x0006A0, "Member 'UW_Field_WinEnemy_C::Text_NAME' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, W_EnemyGauge) == 0x0006A8, "Member 'UW_Field_WinEnemy_C::W_EnemyGauge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, W_Spirit_Gauge) == 0x0006B0, "Member 'UW_Field_WinEnemy_C::W_Spirit_Gauge' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, Level) == 0x0006B8, "Member 'UW_Field_WinEnemy_C::Level' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, HP) == 0x0006BC, "Member 'UW_Field_WinEnemy_C::HP' has a wrong offset!");
static_assert(offsetof(UW_Field_WinEnemy_C, MaxHP) == 0x0006C0, "Member 'UW_Field_WinEnemy_C::MaxHP' has a wrong offset!");

}
