#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WhiteFade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WhiteFade.W_WhiteFade_C
// 0x0030 (0x0518 - 0x04E8)
class UW_WhiteFade_C final : public UUIWhiteFade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade_In_Half;                                      // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_Out_Half;                                     // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_In;                                           // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade_Out;                                          // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 WhitePanel;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_WhiteFade(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WhiteFade_C">();
	}
	static class UW_WhiteFade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WhiteFade_C>();
	}
};
static_assert(alignof(UW_WhiteFade_C) == 0x000008, "Wrong alignment on UW_WhiteFade_C");
static_assert(sizeof(UW_WhiteFade_C) == 0x000518, "Wrong size on UW_WhiteFade_C");
static_assert(offsetof(UW_WhiteFade_C, UberGraphFrame) == 0x0004E8, "Member 'UW_WhiteFade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_WhiteFade_C, Fade_In_Half) == 0x0004F0, "Member 'UW_WhiteFade_C::Fade_In_Half' has a wrong offset!");
static_assert(offsetof(UW_WhiteFade_C, Fade_Out_Half) == 0x0004F8, "Member 'UW_WhiteFade_C::Fade_Out_Half' has a wrong offset!");
static_assert(offsetof(UW_WhiteFade_C, Fade_In) == 0x000500, "Member 'UW_WhiteFade_C::Fade_In' has a wrong offset!");
static_assert(offsetof(UW_WhiteFade_C, Fade_Out) == 0x000508, "Member 'UW_WhiteFade_C::Fade_Out' has a wrong offset!");
static_assert(offsetof(UW_WhiteFade_C, WhitePanel) == 0x000510, "Member 'UW_WhiteFade_C::WhitePanel' has a wrong offset!");

}
