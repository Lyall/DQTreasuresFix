#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UnknownHubPop

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_UnknownHubPop.W_UnknownHubPop_C
// 0x0020 (0x05E0 - 0x05C0)
class UW_UnknownHubPop_C final : public UUIUnknownHubPop
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_UnknownArtifact_Hub_C*               W_UnknownArtifact_Hub;                             // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_UnknownHubPop_C">();
	}
	static class UW_UnknownHubPop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_UnknownHubPop_C>();
	}
};
static_assert(alignof(UW_UnknownHubPop_C) == 0x000010, "Wrong alignment on UW_UnknownHubPop_C");
static_assert(sizeof(UW_UnknownHubPop_C) == 0x0005E0, "Wrong size on UW_UnknownHubPop_C");
static_assert(offsetof(UW_UnknownHubPop_C, Out) == 0x0005C0, "Member 'UW_UnknownHubPop_C::Out' has a wrong offset!");
static_assert(offsetof(UW_UnknownHubPop_C, In) == 0x0005C8, "Member 'UW_UnknownHubPop_C::In' has a wrong offset!");
static_assert(offsetof(UW_UnknownHubPop_C, W_UnknownArtifact_Hub) == 0x0005D0, "Member 'UW_UnknownHubPop_C::W_UnknownArtifact_Hub' has a wrong offset!");

}
