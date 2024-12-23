#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Itemmenu_Artifact

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Itemmenu_Artifact.W_Itemmenu_Artifact_C
// 0x0040 (0x04F8 - 0x04B8)
class UW_Itemmenu_Artifact_C final : public UUIItemmenu_Artifact
{
public:
	class UImage*                                 CatIcon_1;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIcon_2;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIcon_3;                                         // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIcon_4;                                         // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIcon_5;                                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CatIcon_6;                                         // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NameBase;                                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Itemmenu_HaveArtifact_C*             W_Itemmenu_HaveArtifact;                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Itemmenu_Artifact_C">();
	}
	static class UW_Itemmenu_Artifact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Itemmenu_Artifact_C>();
	}
};
static_assert(alignof(UW_Itemmenu_Artifact_C) == 0x000008, "Wrong alignment on UW_Itemmenu_Artifact_C");
static_assert(sizeof(UW_Itemmenu_Artifact_C) == 0x0004F8, "Wrong size on UW_Itemmenu_Artifact_C");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_1) == 0x0004B8, "Member 'UW_Itemmenu_Artifact_C::CatIcon_1' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_2) == 0x0004C0, "Member 'UW_Itemmenu_Artifact_C::CatIcon_2' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_3) == 0x0004C8, "Member 'UW_Itemmenu_Artifact_C::CatIcon_3' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_4) == 0x0004D0, "Member 'UW_Itemmenu_Artifact_C::CatIcon_4' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_5) == 0x0004D8, "Member 'UW_Itemmenu_Artifact_C::CatIcon_5' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, CatIcon_6) == 0x0004E0, "Member 'UW_Itemmenu_Artifact_C::CatIcon_6' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, NameBase) == 0x0004E8, "Member 'UW_Itemmenu_Artifact_C::NameBase' has a wrong offset!");
static_assert(offsetof(UW_Itemmenu_Artifact_C, W_Itemmenu_HaveArtifact) == 0x0004F0, "Member 'UW_Itemmenu_Artifact_C::W_Itemmenu_HaveArtifact' has a wrong offset!");

}

