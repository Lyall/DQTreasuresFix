#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loading_Run

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loading_Run.W_Loading_Run_C
// 0x0088 (0x0580 - 0x04F8)
class UW_Loading_Run_C final : public UUIStartLoopAnimation
{
public:
	class UWidgetAnimation*                       Wait;                                              // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Chara_A_01;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_02;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_03;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_04;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_05;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_06;                                        // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_07;                                        // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_A_08;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_01;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_02;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_03;                                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_04;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_05;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_06;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_07;                                        // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_B_08;                                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loading_Run_C">();
	}
	static class UW_Loading_Run_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loading_Run_C>();
	}
};
static_assert(alignof(UW_Loading_Run_C) == 0x000008, "Wrong alignment on UW_Loading_Run_C");
static_assert(sizeof(UW_Loading_Run_C) == 0x000580, "Wrong size on UW_Loading_Run_C");
static_assert(offsetof(UW_Loading_Run_C, Wait) == 0x0004F8, "Member 'UW_Loading_Run_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_01) == 0x000500, "Member 'UW_Loading_Run_C::Chara_A_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_02) == 0x000508, "Member 'UW_Loading_Run_C::Chara_A_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_03) == 0x000510, "Member 'UW_Loading_Run_C::Chara_A_03' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_04) == 0x000518, "Member 'UW_Loading_Run_C::Chara_A_04' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_05) == 0x000520, "Member 'UW_Loading_Run_C::Chara_A_05' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_06) == 0x000528, "Member 'UW_Loading_Run_C::Chara_A_06' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_07) == 0x000530, "Member 'UW_Loading_Run_C::Chara_A_07' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_A_08) == 0x000538, "Member 'UW_Loading_Run_C::Chara_A_08' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_01) == 0x000540, "Member 'UW_Loading_Run_C::Chara_B_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_02) == 0x000548, "Member 'UW_Loading_Run_C::Chara_B_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_03) == 0x000550, "Member 'UW_Loading_Run_C::Chara_B_03' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_04) == 0x000558, "Member 'UW_Loading_Run_C::Chara_B_04' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_05) == 0x000560, "Member 'UW_Loading_Run_C::Chara_B_05' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_06) == 0x000568, "Member 'UW_Loading_Run_C::Chara_B_06' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_07) == 0x000570, "Member 'UW_Loading_Run_C::Chara_B_07' has a wrong offset!");
static_assert(offsetof(UW_Loading_Run_C, Chara_B_08) == 0x000578, "Member 'UW_Loading_Run_C::Chara_B_08' has a wrong offset!");

}
