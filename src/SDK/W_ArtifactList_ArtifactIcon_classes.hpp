#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ArtifactList_ArtifactIcon

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ArtifactList_ArtifactIcon.W_ArtifactList_ArtifactIcon_C
// 0x0020 (0x04B8 - 0x0498)
class UW_ArtifactList_ArtifactIcon_C final : public UUIArtifactList_ArtifactIcon
{
public:
	class UWidgetAnimation*                       on;                                                // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ArtifactIcon;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Add;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ArtifactList_ArtifactIcon_C">();
	}
	static class UW_ArtifactList_ArtifactIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ArtifactList_ArtifactIcon_C>();
	}
};
static_assert(alignof(UW_ArtifactList_ArtifactIcon_C) == 0x000008, "Wrong alignment on UW_ArtifactList_ArtifactIcon_C");
static_assert(sizeof(UW_ArtifactList_ArtifactIcon_C) == 0x0004B8, "Wrong size on UW_ArtifactList_ArtifactIcon_C");
static_assert(offsetof(UW_ArtifactList_ArtifactIcon_C, on) == 0x000498, "Member 'UW_ArtifactList_ArtifactIcon_C::on' has a wrong offset!");
static_assert(offsetof(UW_ArtifactList_ArtifactIcon_C, Wait) == 0x0004A0, "Member 'UW_ArtifactList_ArtifactIcon_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_ArtifactList_ArtifactIcon_C, ArtifactIcon) == 0x0004A8, "Member 'UW_ArtifactList_ArtifactIcon_C::ArtifactIcon' has a wrong offset!");
static_assert(offsetof(UW_ArtifactList_ArtifactIcon_C, Icon_Add) == 0x0004B0, "Member 'UW_ArtifactList_ArtifactIcon_C::Icon_Add' has a wrong offset!");

}

