#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CharAdd_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CharAdd_00.W_CharAdd_00_C
// 0x0030 (0x05B0 - 0x0580)
class alignas(0x10) UW_CharAdd_00_C final : public UUICharAdd_00
{
public:
	class UWidgetAnimation*                       PressA_In;                                         // 0x0580(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PressA_Off;                                        // 0x0588(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PressA_Wait;                                       // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_1;                                            // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CharAdd_00_C">();
	}
	static class UW_CharAdd_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CharAdd_00_C>();
	}
};
static_assert(alignof(UW_CharAdd_00_C) == 0x000010, "Wrong alignment on UW_CharAdd_00_C");
static_assert(sizeof(UW_CharAdd_00_C) == 0x0005B0, "Wrong size on UW_CharAdd_00_C");
static_assert(offsetof(UW_CharAdd_00_C, PressA_In) == 0x000580, "Member 'UW_CharAdd_00_C::PressA_In' has a wrong offset!");
static_assert(offsetof(UW_CharAdd_00_C, PressA_Off) == 0x000588, "Member 'UW_CharAdd_00_C::PressA_Off' has a wrong offset!");
static_assert(offsetof(UW_CharAdd_00_C, PressA_Wait) == 0x000590, "Member 'UW_CharAdd_00_C::PressA_Wait' has a wrong offset!");
static_assert(offsetof(UW_CharAdd_00_C, In) == 0x000598, "Member 'UW_CharAdd_00_C::In' has a wrong offset!");
static_assert(offsetof(UW_CharAdd_00_C, Icon_1) == 0x0005A0, "Member 'UW_CharAdd_00_C::Icon_1' has a wrong offset!");

}
