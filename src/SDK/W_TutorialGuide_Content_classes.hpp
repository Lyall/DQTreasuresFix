#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TutorialGuide_Content

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TutorialGuide_Content.W_TutorialGuide_Content_C
// 0x0020 (0x04E8 - 0x04C8)
class UW_TutorialGuide_Content_C final : public UUITutorialGuide_Content
{
public:
	class UW_TextWidget_C*                        ActionTextWidget;                                  // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        CommandTextWidget;                                 // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Triangle_1;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBase;                                          // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TutorialGuide_Content_C">();
	}
	static class UW_TutorialGuide_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TutorialGuide_Content_C>();
	}
};
static_assert(alignof(UW_TutorialGuide_Content_C) == 0x000008, "Wrong alignment on UW_TutorialGuide_Content_C");
static_assert(sizeof(UW_TutorialGuide_Content_C) == 0x0004E8, "Wrong size on UW_TutorialGuide_Content_C");
static_assert(offsetof(UW_TutorialGuide_Content_C, ActionTextWidget) == 0x0004C8, "Member 'UW_TutorialGuide_Content_C::ActionTextWidget' has a wrong offset!");
static_assert(offsetof(UW_TutorialGuide_Content_C, CommandTextWidget) == 0x0004D0, "Member 'UW_TutorialGuide_Content_C::CommandTextWidget' has a wrong offset!");
static_assert(offsetof(UW_TutorialGuide_Content_C, Icon_Triangle_1) == 0x0004D8, "Member 'UW_TutorialGuide_Content_C::Icon_Triangle_1' has a wrong offset!");
static_assert(offsetof(UW_TutorialGuide_Content_C, IconBase) == 0x0004E0, "Member 'UW_TutorialGuide_Content_C::IconBase' has a wrong offset!");

}
