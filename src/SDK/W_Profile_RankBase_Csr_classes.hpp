#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Profile_RankBase_Csr

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Profile_RankBase_Csr.W_Profile_RankBase_Csr_C
// 0x0030 (0x0528 - 0x04F8)
class UW_Profile_RankBase_Csr_C final : public UUIStartLoopAnimation
{
public:
	class UWidgetAnimation*                       off;                                               // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           arrow;                                             // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Csr;                                          // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Csr_Add;                                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCanvasPanel* GetArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Profile_RankBase_Csr_C">();
	}
	static class UW_Profile_RankBase_Csr_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Profile_RankBase_Csr_C>();
	}
};
static_assert(alignof(UW_Profile_RankBase_Csr_C) == 0x000008, "Wrong alignment on UW_Profile_RankBase_Csr_C");
static_assert(sizeof(UW_Profile_RankBase_Csr_C) == 0x000528, "Wrong size on UW_Profile_RankBase_Csr_C");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, off) == 0x0004F8, "Member 'UW_Profile_RankBase_Csr_C::off' has a wrong offset!");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, Wait) == 0x000500, "Member 'UW_Profile_RankBase_Csr_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, on) == 0x000508, "Member 'UW_Profile_RankBase_Csr_C::on' has a wrong offset!");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, arrow) == 0x000510, "Member 'UW_Profile_RankBase_Csr_C::arrow' has a wrong offset!");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, Base_Csr) == 0x000518, "Member 'UW_Profile_RankBase_Csr_C::Base_Csr' has a wrong offset!");
static_assert(offsetof(UW_Profile_RankBase_Csr_C, Base_Csr_Add) == 0x000520, "Member 'UW_Profile_RankBase_Csr_C::Base_Csr_Add' has a wrong offset!");

}

