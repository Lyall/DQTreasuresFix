#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_OperationWin

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_OperationWin.W_OperationWin_C
// 0x00C0 (0x05A8 - 0x04E8)
class UW_OperationWin_C final : public UUIOperationWin
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x04E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 KeyBase;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R_3;                                               // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R_4;                                               // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 R_5;                                               // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_A;                                      // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_B;                                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_L;                                      // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_L_2;                                    // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_L3;                                     // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_LSTICK;                                 // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_Minus;                                  // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_Plus;                                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_R;                                      // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_R3;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_RSTICK;                                 // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_UD;                                     // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_X;                                      // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_Y;                                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TextWidget_C*                        TextWidget_ZR;                                     // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Topbar;                                            // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BG_Black_C*                          W_BG_Black;                                        // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WindowBase;                                        // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_OperationWin_C">();
	}
	static class UW_OperationWin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_OperationWin_C>();
	}
};
static_assert(alignof(UW_OperationWin_C) == 0x000008, "Wrong alignment on UW_OperationWin_C");
static_assert(sizeof(UW_OperationWin_C) == 0x0005A8, "Wrong size on UW_OperationWin_C");
static_assert(offsetof(UW_OperationWin_C, Out) == 0x0004E8, "Member 'UW_OperationWin_C::Out' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, In) == 0x0004F0, "Member 'UW_OperationWin_C::In' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, KeyBase) == 0x0004F8, "Member 'UW_OperationWin_C::KeyBase' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, R_3) == 0x000500, "Member 'UW_OperationWin_C::R_3' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, R_4) == 0x000508, "Member 'UW_OperationWin_C::R_4' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, R_5) == 0x000510, "Member 'UW_OperationWin_C::R_5' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_A) == 0x000518, "Member 'UW_OperationWin_C::TextWidget_A' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_B) == 0x000520, "Member 'UW_OperationWin_C::TextWidget_B' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_L) == 0x000528, "Member 'UW_OperationWin_C::TextWidget_L' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_L_2) == 0x000530, "Member 'UW_OperationWin_C::TextWidget_L_2' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_L3) == 0x000538, "Member 'UW_OperationWin_C::TextWidget_L3' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_LSTICK) == 0x000540, "Member 'UW_OperationWin_C::TextWidget_LSTICK' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_Minus) == 0x000548, "Member 'UW_OperationWin_C::TextWidget_Minus' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_Plus) == 0x000550, "Member 'UW_OperationWin_C::TextWidget_Plus' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_R) == 0x000558, "Member 'UW_OperationWin_C::TextWidget_R' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_R3) == 0x000560, "Member 'UW_OperationWin_C::TextWidget_R3' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_RSTICK) == 0x000568, "Member 'UW_OperationWin_C::TextWidget_RSTICK' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_UD) == 0x000570, "Member 'UW_OperationWin_C::TextWidget_UD' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_X) == 0x000578, "Member 'UW_OperationWin_C::TextWidget_X' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_Y) == 0x000580, "Member 'UW_OperationWin_C::TextWidget_Y' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, TextWidget_ZR) == 0x000588, "Member 'UW_OperationWin_C::TextWidget_ZR' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, Topbar) == 0x000590, "Member 'UW_OperationWin_C::Topbar' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, W_BG_Black) == 0x000598, "Member 'UW_OperationWin_C::W_BG_Black' has a wrong offset!");
static_assert(offsetof(UW_OperationWin_C, WindowBase) == 0x0005A0, "Member 'UW_OperationWin_C::WindowBase' has a wrong offset!");

}
