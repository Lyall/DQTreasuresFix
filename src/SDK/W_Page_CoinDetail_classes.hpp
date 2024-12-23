#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Page_CoinDetail

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Page_CoinDetail.W_Page_CoinDetail_C
// 0x0068 (0x06A8 - 0x0640)
class UW_Page_CoinDetail_C final : public UUIPage_CoinDetail
{
public:
	class UWidgetAnimation*                       Empty_On;                                          // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Empty_Off;                                         // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Edit;                                              // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Template;                                          // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_IconArrow_C*                    W_Menu_IconArrow;                                  // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Panel_CoinDetail_C*                  W_Panel_CoinDetail_01;                             // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Panel_CoinDetail_C*                  W_Panel_CoinDetail_02;                             // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Panel_CoinDetail_C*                  W_Panel_CoinDetail_03;                             // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Panel_CoinDetail_C*                  W_Panel_CoinDetail_04;                             // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Page_CoinDetail_C">();
	}
	static class UW_Page_CoinDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Page_CoinDetail_C>();
	}
};
static_assert(alignof(UW_Page_CoinDetail_C) == 0x000008, "Wrong alignment on UW_Page_CoinDetail_C");
static_assert(sizeof(UW_Page_CoinDetail_C) == 0x0006A8, "Wrong size on UW_Page_CoinDetail_C");
static_assert(offsetof(UW_Page_CoinDetail_C, Empty_On) == 0x000640, "Member 'UW_Page_CoinDetail_C::Empty_On' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Empty_Off) == 0x000648, "Member 'UW_Page_CoinDetail_C::Empty_Off' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Edit) == 0x000650, "Member 'UW_Page_CoinDetail_C::Edit' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Out) == 0x000658, "Member 'UW_Page_CoinDetail_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, In) == 0x000660, "Member 'UW_Page_CoinDetail_C::In' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Image_0) == 0x000668, "Member 'UW_Page_CoinDetail_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Image_1) == 0x000670, "Member 'UW_Page_CoinDetail_C::Image_1' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, Template) == 0x000678, "Member 'UW_Page_CoinDetail_C::Template' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, W_Menu_IconArrow) == 0x000680, "Member 'UW_Page_CoinDetail_C::W_Menu_IconArrow' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, W_Panel_CoinDetail_01) == 0x000688, "Member 'UW_Page_CoinDetail_C::W_Panel_CoinDetail_01' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, W_Panel_CoinDetail_02) == 0x000690, "Member 'UW_Page_CoinDetail_C::W_Panel_CoinDetail_02' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, W_Panel_CoinDetail_03) == 0x000698, "Member 'UW_Page_CoinDetail_C::W_Panel_CoinDetail_03' has a wrong offset!");
static_assert(offsetof(UW_Page_CoinDetail_C, W_Panel_CoinDetail_04) == 0x0006A0, "Member 'UW_Page_CoinDetail_C::W_Panel_CoinDetail_04' has a wrong offset!");

}

