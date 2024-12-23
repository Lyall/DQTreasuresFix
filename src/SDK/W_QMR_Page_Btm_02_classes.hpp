#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_QMR_Page_Btm_02

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_QMR_Page_Btm_02.W_QMR_Page_Btm_02_C
// 0x0060 (0x0688 - 0x0628)
class UW_QMR_Page_Btm_02_C final : public UUIQMR_Page_Btm_02
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ScrollBar_1;                                       // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScrollBar_Base_1;                                  // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_IconArrow_C*                    W_Menu_IconArrow;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_00_C*                       W_QM_MainPanel_00;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_01;                                     // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_02;                                     // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_03;                                     // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_04;                                     // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_05;                                     // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_QM_Panel_01_C*                       W_QM_Panel_06;                                     // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_QMR_Page_Btm_02_C">();
	}
	static class UW_QMR_Page_Btm_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_QMR_Page_Btm_02_C>();
	}
};
static_assert(alignof(UW_QMR_Page_Btm_02_C) == 0x000008, "Wrong alignment on UW_QMR_Page_Btm_02_C");
static_assert(sizeof(UW_QMR_Page_Btm_02_C) == 0x000688, "Wrong size on UW_QMR_Page_Btm_02_C");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, Out) == 0x000628, "Member 'UW_QMR_Page_Btm_02_C::Out' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, In) == 0x000630, "Member 'UW_QMR_Page_Btm_02_C::In' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, ScrollBar_1) == 0x000638, "Member 'UW_QMR_Page_Btm_02_C::ScrollBar_1' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, ScrollBar_Base_1) == 0x000640, "Member 'UW_QMR_Page_Btm_02_C::ScrollBar_Base_1' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_Menu_IconArrow) == 0x000648, "Member 'UW_QMR_Page_Btm_02_C::W_Menu_IconArrow' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_MainPanel_00) == 0x000650, "Member 'UW_QMR_Page_Btm_02_C::W_QM_MainPanel_00' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_01) == 0x000658, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_01' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_02) == 0x000660, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_02' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_03) == 0x000668, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_03' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_04) == 0x000670, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_04' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_05) == 0x000678, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_05' has a wrong offset!");
static_assert(offsetof(UW_QMR_Page_Btm_02_C, W_QM_Panel_06) == 0x000680, "Member 'UW_QMR_Page_Btm_02_C::W_QM_Panel_06' has a wrong offset!");

}

