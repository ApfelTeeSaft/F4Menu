#pragma once
#include "framework.h"

SDK::UEngine* Engine = SDK::UEngine::GetEngine();
SDK::UWorld* World = SDK::UWorld::GetWorld();
SDK::APlayerController* AF4PlayerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
SDK::ULevel* Level = World->PersistentLevel;
SDK::TArray<SDK::AActor*>& Actors = Level->Actors;