#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Vision_CutIn

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Vision_CutIn.W_Vision_CutIn_C
// 0x0020 (0x0508 - 0x04E8)
class UW_Vision_CutIn_C final : public UUIVision_CutIn
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x04E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CatIn_Char_Add;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIn_Char_Base;                                   // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Vision_CutIn_C">();
	}
	static class UW_Vision_CutIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Vision_CutIn_C>();
	}
};
static_assert(alignof(UW_Vision_CutIn_C) == 0x000008, "Wrong alignment on UW_Vision_CutIn_C");
static_assert(sizeof(UW_Vision_CutIn_C) == 0x000508, "Wrong size on UW_Vision_CutIn_C");
static_assert(offsetof(UW_Vision_CutIn_C, Out) == 0x0004E8, "Member 'UW_Vision_CutIn_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Vision_CutIn_C, In) == 0x0004F0, "Member 'UW_Vision_CutIn_C::In' has a wrong offset!");
static_assert(offsetof(UW_Vision_CutIn_C, CatIn_Char_Add) == 0x0004F8, "Member 'UW_Vision_CutIn_C::CatIn_Char_Add' has a wrong offset!");
static_assert(offsetof(UW_Vision_CutIn_C, CatIn_Char_Base) == 0x000500, "Member 'UW_Vision_CutIn_C::CatIn_Char_Base' has a wrong offset!");

}
