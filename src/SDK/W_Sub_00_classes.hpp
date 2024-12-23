#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Sub_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Sub_00.W_Sub_00_C
// 0x0010 (0x04B0 - 0x04A0)
class UW_Sub_00_C final : public UUIEvent_Subtitles
{
public:
	class UImage*                                 Image_26;                                          // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        W_TextWidget;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Sub_00_C">();
	}
	static class UW_Sub_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Sub_00_C>();
	}
};
static_assert(alignof(UW_Sub_00_C) == 0x000008, "Wrong alignment on UW_Sub_00_C");
static_assert(sizeof(UW_Sub_00_C) == 0x0004B0, "Wrong size on UW_Sub_00_C");
static_assert(offsetof(UW_Sub_00_C, Image_26) == 0x0004A0, "Member 'UW_Sub_00_C::Image_26' has a wrong offset!");
static_assert(offsetof(UW_Sub_00_C, W_TextWidget) == 0x0004A8, "Member 'UW_Sub_00_C::W_TextWidget' has a wrong offset!");

}

