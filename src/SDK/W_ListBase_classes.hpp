#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ListBase

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ListBase.W_ListBase_C
// 0x0028 (0x0260 - 0x0238)
class UW_ListBase_C final : public UUserWidget
{
public:
	class UImage*                                 Image;                                             // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_47;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_77;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_108;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_144;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ListBase_C">();
	}
	static class UW_ListBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ListBase_C>();
	}
};
static_assert(alignof(UW_ListBase_C) == 0x000008, "Wrong alignment on UW_ListBase_C");
static_assert(sizeof(UW_ListBase_C) == 0x000260, "Wrong size on UW_ListBase_C");
static_assert(offsetof(UW_ListBase_C, Image) == 0x000238, "Member 'UW_ListBase_C::Image' has a wrong offset!");
static_assert(offsetof(UW_ListBase_C, Image_47) == 0x000240, "Member 'UW_ListBase_C::Image_47' has a wrong offset!");
static_assert(offsetof(UW_ListBase_C, Image_77) == 0x000248, "Member 'UW_ListBase_C::Image_77' has a wrong offset!");
static_assert(offsetof(UW_ListBase_C, Image_108) == 0x000250, "Member 'UW_ListBase_C::Image_108' has a wrong offset!");
static_assert(offsetof(UW_ListBase_C, Image_144) == 0x000258, "Member 'UW_ListBase_C::Image_144' has a wrong offset!");

}
