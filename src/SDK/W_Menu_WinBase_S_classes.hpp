#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Menu_WinBase_S

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Menu_WinBase_S.W_Menu_WinBase_S_C
// 0x0008 (0x0240 - 0x0238)
class UW_Menu_WinBase_S_C final : public UUserWidget
{
public:
	class UImage*                                 WindowBase;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Menu_WinBase_S_C">();
	}
	static class UW_Menu_WinBase_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Menu_WinBase_S_C>();
	}
};
static_assert(alignof(UW_Menu_WinBase_S_C) == 0x000008, "Wrong alignment on UW_Menu_WinBase_S_C");
static_assert(sizeof(UW_Menu_WinBase_S_C) == 0x000240, "Wrong size on UW_Menu_WinBase_S_C");
static_assert(offsetof(UW_Menu_WinBase_S_C, WindowBase) == 0x000238, "Member 'UW_Menu_WinBase_S_C::WindowBase' has a wrong offset!");

}
