#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_Pointreader

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_Pointreader.W_Field_Pointreader_C
// 0x0020 (0x04B0 - 0x0490)
class UW_Field_Pointreader_C final : public UUIField_Pointreader
{
public:
	class UWidgetAnimation*                       off;                                               // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 point_0ff;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 point_On;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_Pointreader_C">();
	}
	static class UW_Field_Pointreader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_Pointreader_C>();
	}
};
static_assert(alignof(UW_Field_Pointreader_C) == 0x000008, "Wrong alignment on UW_Field_Pointreader_C");
static_assert(sizeof(UW_Field_Pointreader_C) == 0x0004B0, "Wrong size on UW_Field_Pointreader_C");
static_assert(offsetof(UW_Field_Pointreader_C, off) == 0x000490, "Member 'UW_Field_Pointreader_C::off' has a wrong offset!");
static_assert(offsetof(UW_Field_Pointreader_C, on) == 0x000498, "Member 'UW_Field_Pointreader_C::on' has a wrong offset!");
static_assert(offsetof(UW_Field_Pointreader_C, point_0ff) == 0x0004A0, "Member 'UW_Field_Pointreader_C::point_0ff' has a wrong offset!");
static_assert(offsetof(UW_Field_Pointreader_C, point_On) == 0x0004A8, "Member 'UW_Field_Pointreader_C::point_On' has a wrong offset!");

}

