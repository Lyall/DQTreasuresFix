#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Itemmenu_03_Root

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Itemmenu_03_Root.W_Itemmenu_03_Root_C
// 0x0018 (0x04F0 - 0x04D8)
class UW_Itemmenu_03_Root_C final : public UUIItemmenu_03_Root
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BK;                                                // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Itemmenu_03_Root_C">();
	}
	static class UW_Itemmenu_03_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Itemmenu_03_Root_C>();
	}
};
static_assert(alignof(UW_Itemmenu_03_Root_C) == 0x000008, "Wrong alignment on UW_Itemmenu_03_Root_C");
static_assert(sizeof(UW_Itemmenu_03_Root_C) == 0x0004F0, "Wrong size on UW_Itemmenu_03_Root_C");
static_assert(offsetof(UW_Itemmenu_03_Root_C, Out) == 0x0004D8, "Member 'UW_Itemmenu_03_Root_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_03_Root_C, In) == 0x0004E0, "Member 'UW_Itemmenu_03_Root_C::In' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_03_Root_C, BK) == 0x0004E8, "Member 'UW_Itemmenu_03_Root_C::BK' has a wrong offset!");

}
