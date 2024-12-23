#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Itemget_NewItem

#include "Basic.hpp"

#include "W_Itemget_NewItem_classes.hpp"
#include "W_Itemget_NewItem_parameters.hpp"


namespace SDK
{

// Function W_Itemget_NewItem.W_Itemget_NewItem_C.SetFlavorTextAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Itemget_NewItem_C::SetFlavorTextAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "SetFlavorTextAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.SetKiraAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemDataType                           InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Itemget_NewItem_C::SetKiraAnim(class FName InItemId, EItemDataType InItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "SetKiraAnim");

	Params::W_Itemget_NewItem_C_SetKiraAnim Parms{};

	Parms.InItemId = InItemId;
	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.GetRecipeItemDataInfo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InRecipeId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfoData                 OutRecipeItemInfo                                      (Parm, OutParm)

void UW_Itemget_NewItem_C::GetRecipeItemDataInfo(class FName InRecipeId, struct FST_ItemInfoData* OutRecipeItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "GetRecipeItemDataInfo");

	Params::W_Itemget_NewItem_C_GetRecipeItemDataInfo Parms{};

	Parms.InRecipeId = InRecipeId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRecipeItemInfo != nullptr)
		*OutRecipeItemInfo = std::move(Parms.OutRecipeItemInfo);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.GetItemDataInfo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfoData                 OutItemInfo                                            (Parm, OutParm)

void UW_Itemget_NewItem_C::GetItemDataInfo(class FName InItemId, struct FST_ItemInfoData* OutItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "GetItemDataInfo");

	Params::W_Itemget_NewItem_C_GetItemDataInfo Parms{};

	Parms.InItemId = InItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItemInfo != nullptr)
		*OutItemInfo = std::move(Parms.OutItemInfo);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.SetPrintData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>        InIconTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Itemget_NewItem_C::SetPrintData(const class FText& InName, TSoftObjectPtr<class UTexture2D> InIconTexture, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "SetPrintData");

	Params::W_Itemget_NewItem_C_SetPrintData Parms{};

	Parms.InName = std::move(InName);
	Parms.InIconTexture = InIconTexture;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.InputEventFunc
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GamePaused                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeyInput                        KeyInput                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyInput                        OutKeyInput                                            (Parm, OutParm)
// struct FEventReply                      Reply                                                  (Parm, OutParm)

void UW_Itemget_NewItem_C::InputEventFunc(float DeltaTime, bool GamePaused, const struct FKeyInput& KeyInput, struct FKeyInput* OutKeyInput, struct FEventReply* Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "InputEventFunc");

	Params::W_Itemget_NewItem_C_InputEventFunc Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.GamePaused = GamePaused;
	Parms.KeyInput = std::move(KeyInput);

	UObject::ProcessEvent(Func, &Parms);

	if (OutKeyInput != nullptr)
		*OutKeyInput = std::move(Parms.OutKeyInput);

	if (Reply != nullptr)
		*Reply = std::move(Parms.Reply);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.HiddenDesideButton
// (Private, BlueprintCallable, BlueprintEvent)

void UW_Itemget_NewItem_C::HiddenDesideButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "HiddenDesideButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.VisibleDesideButton
// (Private, BlueprintCallable, BlueprintEvent)

void UW_Itemget_NewItem_C::VisibleDesideButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "VisibleDesideButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.SetItemFlavorText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Itemget_NewItem_C::SetItemFlavorText(const class FString& SourceString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "SetItemFlavorText");

	Params::W_Itemget_NewItem_C_SetItemFlavorText Parms{};

	Parms.SourceString = std::move(SourceString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.SetItemData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Itemget_NewItem_C::SetItemData(class FName InItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "SetItemData");

	Params::W_Itemget_NewItem_C_SetItemData Parms{};

	Parms.InItemId = InItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UW_Itemget_NewItem_C::open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Itemget_NewItem_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "Update");

	Params::W_Itemget_NewItem_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.ExecuteUbergraph_W_Itemget_NewItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Itemget_NewItem_C::ExecuteUbergraph_W_Itemget_NewItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "ExecuteUbergraph_W_Itemget_NewItem");

	Params::W_Itemget_NewItem_C_ExecuteUbergraph_W_Itemget_NewItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Itemget_NewItem.W_Itemget_NewItem_C.IsDecideVisible
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_Itemget_NewItem_C::IsDecideVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Itemget_NewItem_C", "IsDecideVisible");

	Params::W_Itemget_NewItem_C_IsDecideVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

