#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Dispatch_List

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Dispatch_List.W_Dispatch_List_C
// 0x0088 (0x0688 - 0x0600)
class UW_Dispatch_List_C final : public UUIDispatch_List
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderShadow;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScrollBase_01;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScrollBase_02;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_00;                               // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_01;                               // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_02;                               // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_03;                               // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_04;                               // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_Panel_00_C*                 W_Dispatch_Panel_05;                               // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dispatch_TeamStatus_C*               W_Dispatch_TeamStatus;                             // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Facility_CategoryArea_C*             W_Facility_CategoryArea;                           // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_01_C*                         W_Header_01;                                       // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_IconArrow_C*                    W_Menu_IconArrow;                                  // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Under_Button_C*                      W_Under_Button;                                    // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Dispatch_List_C">();
	}
	static class UW_Dispatch_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Dispatch_List_C>();
	}
};
static_assert(alignof(UW_Dispatch_List_C) == 0x000008, "Wrong alignment on UW_Dispatch_List_C");
static_assert(sizeof(UW_Dispatch_List_C) == 0x000688, "Wrong size on UW_Dispatch_List_C");
static_assert(offsetof(UW_Dispatch_List_C, Out) == 0x000600, "Member 'UW_Dispatch_List_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, In) == 0x000608, "Member 'UW_Dispatch_List_C::In' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, BG) == 0x000610, "Member 'UW_Dispatch_List_C::BG' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, HeaderShadow) == 0x000618, "Member 'UW_Dispatch_List_C::HeaderShadow' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, ScrollBase_01) == 0x000620, "Member 'UW_Dispatch_List_C::ScrollBase_01' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, ScrollBase_02) == 0x000628, "Member 'UW_Dispatch_List_C::ScrollBase_02' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_00) == 0x000630, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_00' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_01) == 0x000638, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_01' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_02) == 0x000640, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_02' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_03) == 0x000648, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_03' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_04) == 0x000650, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_04' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_Panel_05) == 0x000658, "Member 'UW_Dispatch_List_C::W_Dispatch_Panel_05' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Dispatch_TeamStatus) == 0x000660, "Member 'UW_Dispatch_List_C::W_Dispatch_TeamStatus' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Facility_CategoryArea) == 0x000668, "Member 'UW_Dispatch_List_C::W_Facility_CategoryArea' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Header_01) == 0x000670, "Member 'UW_Dispatch_List_C::W_Header_01' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Menu_IconArrow) == 0x000678, "Member 'UW_Dispatch_List_C::W_Menu_IconArrow' has a wrong offset!");
static_assert(offsetof(UW_Dispatch_List_C, W_Under_Button) == 0x000680, "Member 'UW_Dispatch_List_C::W_Under_Button' has a wrong offset!");

}

