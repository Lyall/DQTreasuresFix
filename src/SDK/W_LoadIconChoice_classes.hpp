#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadIconChoice

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadIconChoice.W_LoadIconChoice_C
// 0x0040 (0x0580 - 0x0540)
class UW_LoadIconChoice_C final : public UUILoadIconChoice
{
public:
	class UWidgetAnimation*                       Normal;                                            // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Empty;                                             // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       off;                                               // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           arrow;                                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadIcon_C*                          W_LoadIcon;                                        // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadIconFrame_C*                     W_LoadIconFrame;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Losd_Empty_C*                        W_Losd_Empty;                                      // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCanvasPanel* GetArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadIconChoice_C">();
	}
	static class UW_LoadIconChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadIconChoice_C>();
	}
};
static_assert(alignof(UW_LoadIconChoice_C) == 0x000008, "Wrong alignment on UW_LoadIconChoice_C");
static_assert(sizeof(UW_LoadIconChoice_C) == 0x000580, "Wrong size on UW_LoadIconChoice_C");
static_assert(offsetof(UW_LoadIconChoice_C, Normal) == 0x000540, "Member 'UW_LoadIconChoice_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, Empty) == 0x000548, "Member 'UW_LoadIconChoice_C::Empty' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, off) == 0x000550, "Member 'UW_LoadIconChoice_C::off' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, on) == 0x000558, "Member 'UW_LoadIconChoice_C::on' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, arrow) == 0x000560, "Member 'UW_LoadIconChoice_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, W_LoadIcon) == 0x000568, "Member 'UW_LoadIconChoice_C::W_LoadIcon' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, W_LoadIconFrame) == 0x000570, "Member 'UW_LoadIconChoice_C::W_LoadIconFrame' has a wrong offset!");
static_assert(offsetof(UW_LoadIconChoice_C, W_Losd_Empty) == 0x000578, "Member 'UW_LoadIconChoice_C::W_Losd_Empty' has a wrong offset!");

}
