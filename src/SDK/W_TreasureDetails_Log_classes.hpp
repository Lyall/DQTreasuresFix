#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TreasureDetails_Log

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TreasureDetails_Log.W_TreasureDetails_Log_C
// 0x0018 (0x04B0 - 0x0498)
class UW_TreasureDetails_Log_C final : public UUITreasureDetails_Log
{
public:
	class UWidgetAnimation*                       off;                                               // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 line;                                              // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TreasureDetails_Log_C">();
	}
	static class UW_TreasureDetails_Log_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TreasureDetails_Log_C>();
	}
};
static_assert(alignof(UW_TreasureDetails_Log_C) == 0x000008, "Wrong alignment on UW_TreasureDetails_Log_C");
static_assert(sizeof(UW_TreasureDetails_Log_C) == 0x0004B0, "Wrong size on UW_TreasureDetails_Log_C");
static_assert(offsetof(UW_TreasureDetails_Log_C, off) == 0x000498, "Member 'UW_TreasureDetails_Log_C::off' has a wrong offset!");
static_assert(offsetof(UW_TreasureDetails_Log_C, on) == 0x0004A0, "Member 'UW_TreasureDetails_Log_C::on' has a wrong offset!");
static_assert(offsetof(UW_TreasureDetails_Log_C, line) == 0x0004A8, "Member 'UW_TreasureDetails_Log_C::line' has a wrong offset!");

}
