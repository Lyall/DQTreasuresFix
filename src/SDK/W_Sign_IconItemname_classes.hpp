#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Sign_IconItemname

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Sign_IconItemname.W_Sign_IconItemname_C
// 0x0030 (0x05E0 - 0x05B0)
class UW_Sign_IconItemname_C final : public UUISign_IconItemname
{
public:
	class UWidgetAnimation*                       NewAnimation;                                      // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 arrow;                                             // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NameBase;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Sign_IconItemname_C">();
	}
	static class UW_Sign_IconItemname_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Sign_IconItemname_C>();
	}
};
static_assert(alignof(UW_Sign_IconItemname_C) == 0x000010, "Wrong alignment on UW_Sign_IconItemname_C");
static_assert(sizeof(UW_Sign_IconItemname_C) == 0x0005E0, "Wrong size on UW_Sign_IconItemname_C");
static_assert(offsetof(UW_Sign_IconItemname_C, NewAnimation) == 0x0005B0, "Member 'UW_Sign_IconItemname_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_Sign_IconItemname_C, Out) == 0x0005B8, "Member 'UW_Sign_IconItemname_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Sign_IconItemname_C, In) == 0x0005C0, "Member 'UW_Sign_IconItemname_C::In' has a wrong offset!");
static_assert(offsetof(UW_Sign_IconItemname_C, arrow) == 0x0005C8, "Member 'UW_Sign_IconItemname_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_Sign_IconItemname_C, NameBase) == 0x0005D0, "Member 'UW_Sign_IconItemname_C::NameBase' has a wrong offset!");

}
