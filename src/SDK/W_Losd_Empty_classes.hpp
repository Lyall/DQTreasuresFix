#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Losd_Empty

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Losd_Empty.W_Losd_Empty_C
// 0x0020 (0x0258 - 0x0238)
class UW_Losd_Empty_C final : public UUserWidget
{
public:
	class UImage*                                 Image_3;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Losd_Empty_C">();
	}
	static class UW_Losd_Empty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Losd_Empty_C>();
	}
};
static_assert(alignof(UW_Losd_Empty_C) == 0x000008, "Wrong alignment on UW_Losd_Empty_C");
static_assert(sizeof(UW_Losd_Empty_C) == 0x000258, "Wrong size on UW_Losd_Empty_C");
static_assert(offsetof(UW_Losd_Empty_C, Image_3) == 0x000238, "Member 'UW_Losd_Empty_C::Image_3' has a wrong offset!");
static_assert(offsetof(UW_Losd_Empty_C, Image_4) == 0x000240, "Member 'UW_Losd_Empty_C::Image_4' has a wrong offset!");
static_assert(offsetof(UW_Losd_Empty_C, Image_5) == 0x000248, "Member 'UW_Losd_Empty_C::Image_5' has a wrong offset!");
static_assert(offsetof(UW_Losd_Empty_C, Image_6) == 0x000250, "Member 'UW_Losd_Empty_C::Image_6' has a wrong offset!");

}
