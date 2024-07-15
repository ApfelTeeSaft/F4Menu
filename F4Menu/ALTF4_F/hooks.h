#pragma once

#include "../Engine/4.26/Core/Public/CoreMinimal.h"
#include "../Engine/4.26/CoreUObject/Public/UObject/UObject.h"
#include "../Engine/4.26/CoreUObject/Public/UObject/Class.h"
#include "../Engine/4.26/Engine/Engine/Public/Engine.h"
#include "../Engine/4.26/Engine/Engine/Classes/GameFramework/Actor.h"
#include "../Engine/4.26/Engine/Engine/Classes/GameFramework/PlayerController.h"
#include "../Engine/4.26/Engine/Engine/Classes/Engine/World.h"

bool InitializeHook();
void RenderGUI();
void __fastcall hkProcessEvent(UObject* Object, UFunction* Function, void* Params);