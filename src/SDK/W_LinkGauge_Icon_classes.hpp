#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LinkGauge_Icon

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LinkGauge_Icon.W_LinkGauge_Icon_C
// 0x0020 (0x05E0 - 0x05C0)
class UW_LinkGauge_Icon_C final : public UUILinkGauge_Icon
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_Base;                                         // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LinkGauge_C*                         W_LinkGauge;                                       // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LinkGauge_Icon_C">();
	}
	static class UW_LinkGauge_Icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LinkGauge_Icon_C>();
	}
};
static_assert(alignof(UW_LinkGauge_Icon_C) == 0x000010, "Wrong alignment on UW_LinkGauge_Icon_C");
static_assert(sizeof(UW_LinkGauge_Icon_C) == 0x0005E0, "Wrong size on UW_LinkGauge_Icon_C");
static_assert(offsetof(UW_LinkGauge_Icon_C, Out) == 0x0005C0, "Member 'UW_LinkGauge_Icon_C::Out' has a wrong offset!");
static_assert(offsetof(UW_LinkGauge_Icon_C, In) == 0x0005C8, "Member 'UW_LinkGauge_Icon_C::In' has a wrong offset!");
static_assert(offsetof(UW_LinkGauge_Icon_C, Icon_Base) == 0x0005D0, "Member 'UW_LinkGauge_Icon_C::Icon_Base' has a wrong offset!");
static_assert(offsetof(UW_LinkGauge_Icon_C, W_LinkGauge) == 0x0005D8, "Member 'UW_LinkGauge_Icon_C::W_LinkGauge' has a wrong offset!");

}
