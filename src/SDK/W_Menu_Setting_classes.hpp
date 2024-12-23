#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Menu_Setting

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Menu_Setting.W_Menu_Setting_C
// 0x0050 (0x05D0 - 0x0580)
class UW_Menu_Setting_C final : public UUIMenu_Setting
{
public:
	class UW_LeftMenu_C*                          W_LeftMenu;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadContent_C*                       W_LoadContent;                                     // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionBrightness_C*                  W_OptionBrightness;                                // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionGraphic_01_C*                  W_OptionGraphic_01;                                // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionOperation_01_C*                W_OptionOperation_01;                              // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionScreen_C*                      W_OptionScreen;                                    // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionScreen_PC_01_C*                W_OptionScreen_PC_01;                              // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionSound_C*                       W_OptionSound;                                     // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SaveContent_C*                       W_SaveContent;                                     // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Under_Button_C*                      W_Under_Button;                                    // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Menu_Setting_C">();
	}
	static class UW_Menu_Setting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Menu_Setting_C>();
	}
};
static_assert(alignof(UW_Menu_Setting_C) == 0x000008, "Wrong alignment on UW_Menu_Setting_C");
static_assert(sizeof(UW_Menu_Setting_C) == 0x0005D0, "Wrong size on UW_Menu_Setting_C");
static_assert(offsetof(UW_Menu_Setting_C, W_LeftMenu) == 0x000580, "Member 'UW_Menu_Setting_C::W_LeftMenu' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_LoadContent) == 0x000588, "Member 'UW_Menu_Setting_C::W_LoadContent' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionBrightness) == 0x000590, "Member 'UW_Menu_Setting_C::W_OptionBrightness' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionGraphic_01) == 0x000598, "Member 'UW_Menu_Setting_C::W_OptionGraphic_01' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionOperation_01) == 0x0005A0, "Member 'UW_Menu_Setting_C::W_OptionOperation_01' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionScreen) == 0x0005A8, "Member 'UW_Menu_Setting_C::W_OptionScreen' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionScreen_PC_01) == 0x0005B0, "Member 'UW_Menu_Setting_C::W_OptionScreen_PC_01' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_OptionSound) == 0x0005B8, "Member 'UW_Menu_Setting_C::W_OptionSound' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_SaveContent) == 0x0005C0, "Member 'UW_Menu_Setting_C::W_SaveContent' has a wrong offset!");
static_assert(offsetof(UW_Menu_Setting_C, W_Under_Button) == 0x0005C8, "Member 'UW_Menu_Setting_C::W_Under_Button' has a wrong offset!");

}

