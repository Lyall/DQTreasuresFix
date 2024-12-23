#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UnderBase

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_UnderBase.W_UnderBase_C
// 0x0010 (0x0248 - 0x0238)
class UW_UnderBase_C final : public UUserWidget
{
public:
	class UImage*                                 Image;                                             // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_40;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_UnderBase_C">();
	}
	static class UW_UnderBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_UnderBase_C>();
	}
};
static_assert(alignof(UW_UnderBase_C) == 0x000008, "Wrong alignment on UW_UnderBase_C");
static_assert(sizeof(UW_UnderBase_C) == 0x000248, "Wrong size on UW_UnderBase_C");
static_assert(offsetof(UW_UnderBase_C, Image) == 0x000238, "Member 'UW_UnderBase_C::Image' has a wrong offset!");
static_assert(offsetof(UW_UnderBase_C, Image_40) == 0x000240, "Member 'UW_UnderBase_C::Image_40' has a wrong offset!");

}

