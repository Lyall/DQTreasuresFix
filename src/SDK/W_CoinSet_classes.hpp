#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CoinSet

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CoinSet.W_CoinSet_C
// 0x0098 (0x0610 - 0x0578)
class UW_CoinSet_C final : public UUICoinMenu_CoinSet
{
public:
	class UWidgetAnimation*                       Coin_Only;                                         // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Cursor_Only;                                       // 0x0580(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Lock;                                              // 0x0588(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Icon;                                              // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MonsterFace;                                       // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CoinBase;                                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CoinFace;                                          // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CoinIcon;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CoinLockPanel;                                     // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_Add;                                        // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_Base;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEff_CoinSet_01_C*                      Eff_CoinSet_01;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash;                                             // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Panel;                                             // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Coin_Color_C*                        W_Coin_Color;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CoinSet_C">();
	}
	static class UW_CoinSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CoinSet_C>();
	}
};
static_assert(alignof(UW_CoinSet_C) == 0x000008, "Wrong alignment on UW_CoinSet_C");
static_assert(sizeof(UW_CoinSet_C) == 0x000610, "Wrong size on UW_CoinSet_C");
static_assert(offsetof(UW_CoinSet_C, Coin_Only) == 0x000578, "Member 'UW_CoinSet_C::Coin_Only' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Cursor_Only) == 0x000580, "Member 'UW_CoinSet_C::Cursor_Only' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Lock) == 0x000588, "Member 'UW_CoinSet_C::Lock' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Normal) == 0x000590, "Member 'UW_CoinSet_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Out) == 0x000598, "Member 'UW_CoinSet_C::Out' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, In) == 0x0005A0, "Member 'UW_CoinSet_C::In' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Icon) == 0x0005A8, "Member 'UW_CoinSet_C::Icon' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, MonsterFace) == 0x0005B0, "Member 'UW_CoinSet_C::MonsterFace' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Wait) == 0x0005B8, "Member 'UW_CoinSet_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, CoinBase) == 0x0005C0, "Member 'UW_CoinSet_C::CoinBase' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, CoinFace) == 0x0005C8, "Member 'UW_CoinSet_C::CoinFace' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, CoinIcon) == 0x0005D0, "Member 'UW_CoinSet_C::CoinIcon' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, CoinLockPanel) == 0x0005D8, "Member 'UW_CoinSet_C::CoinLockPanel' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Cursor_Add) == 0x0005E0, "Member 'UW_CoinSet_C::Cursor_Add' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Cursor_Base) == 0x0005E8, "Member 'UW_CoinSet_C::Cursor_Base' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Eff_CoinSet_01) == 0x0005F0, "Member 'UW_CoinSet_C::Eff_CoinSet_01' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Flash) == 0x0005F8, "Member 'UW_CoinSet_C::Flash' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, Panel) == 0x000600, "Member 'UW_CoinSet_C::Panel' has a wrong offset!");
static_assert(offsetof(UW_CoinSet_C, W_Coin_Color) == 0x000608, "Member 'UW_CoinSet_C::W_Coin_Color' has a wrong offset!");

}

