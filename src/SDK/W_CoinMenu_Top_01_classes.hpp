#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CoinMenu_Top_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CoinMenu_Top_01.W_CoinMenu_Top_01_C
// 0x0038 (0x0558 - 0x0520)
class UW_CoinMenu_Top_01_C final : public UUICoinMenu_Top
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_CoinMenu_Top_Page_01_C*              W_CoinMenu_Top_Page_01;                            // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LeftMenu_2_C*                        W_LeftMenu;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PartyMenu_BG_C*                      W_PartyMenu_BG;                                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Under_Button_C*                      W_Under_Button;                                    // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_CoinMenu_Top_01(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CoinMenu_Top_01_C">();
	}
	static class UW_CoinMenu_Top_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CoinMenu_Top_01_C>();
	}
};
static_assert(alignof(UW_CoinMenu_Top_01_C) == 0x000008, "Wrong alignment on UW_CoinMenu_Top_01_C");
static_assert(sizeof(UW_CoinMenu_Top_01_C) == 0x000558, "Wrong size on UW_CoinMenu_Top_01_C");
static_assert(offsetof(UW_CoinMenu_Top_01_C, UberGraphFrame) == 0x000520, "Member 'UW_CoinMenu_Top_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, Out) == 0x000528, "Member 'UW_CoinMenu_Top_01_C::Out' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, In) == 0x000530, "Member 'UW_CoinMenu_Top_01_C::In' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, W_CoinMenu_Top_Page_01) == 0x000538, "Member 'UW_CoinMenu_Top_01_C::W_CoinMenu_Top_Page_01' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, W_LeftMenu) == 0x000540, "Member 'UW_CoinMenu_Top_01_C::W_LeftMenu' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, W_PartyMenu_BG) == 0x000548, "Member 'UW_CoinMenu_Top_01_C::W_PartyMenu_BG' has a wrong offset!");
static_assert(offsetof(UW_CoinMenu_Top_01_C, W_Under_Button) == 0x000550, "Member 'UW_CoinMenu_Top_01_C::W_Under_Button' has a wrong offset!");

}

