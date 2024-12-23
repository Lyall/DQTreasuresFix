#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Discovery_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Discovery_00.W_Discovery_00_C
// 0x0040 (0x0600 - 0x05C0)
class UW_Discovery_00_C final : public UUIDiscovery_00
{
public:
	class UWidgetAnimation*                       off;                                               // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Discovery;                                         // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Search;                                            // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_00;                                           // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_00_Add;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Discovery_Icon_C*                    W_Discovery_Icon;                                  // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Discovery_00_C">();
	}
	static class UW_Discovery_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Discovery_00_C>();
	}
};
static_assert(alignof(UW_Discovery_00_C) == 0x000010, "Wrong alignment on UW_Discovery_00_C");
static_assert(sizeof(UW_Discovery_00_C) == 0x000600, "Wrong size on UW_Discovery_00_C");
static_assert(offsetof(UW_Discovery_00_C, off) == 0x0005C0, "Member 'UW_Discovery_00_C::off' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, Discovery) == 0x0005C8, "Member 'UW_Discovery_00_C::Discovery' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, Search) == 0x0005D0, "Member 'UW_Discovery_00_C::Search' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, on) == 0x0005D8, "Member 'UW_Discovery_00_C::on' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, Icon_00) == 0x0005E0, "Member 'UW_Discovery_00_C::Icon_00' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, Icon_00_Add) == 0x0005E8, "Member 'UW_Discovery_00_C::Icon_00_Add' has a wrong offset!");
static_assert(offsetof(UW_Discovery_00_C, W_Discovery_Icon) == 0x0005F0, "Member 'UW_Discovery_00_C::W_Discovery_Icon' has a wrong offset!");

}

