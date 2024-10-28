// globals.h
#pragma once
#include "framework.h"

SDK::UEngine* Engine = nullptr;
SDK::UWorld* World = nullptr;
SDK::APlayerController* AF4PlayerController = nullptr;
SDK::ULevel* Level = nullptr;
SDK::TArray<SDK::AActor*>* Actors = nullptr;

void InitializeGlobals()
{
    Engine = SDK::UEngine::GetEngine();
    if (!Engine)
    {
        std::cerr << "Failed to retrieve Engine instance." << std::endl;
        return;
    }

    World = SDK::UWorld::GetWorld();
    if (!World)
    {
        std::cerr << "Failed to retrieve World instance." << std::endl;
        return;
    }

    if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.Num() > 0)
    {
        AF4PlayerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
    }
    else
    {
        std::cerr << "Failed to retrieve PlayerController." << std::endl;
        return;
    }

    Level = World->PersistentLevel;
    if (!Level)
    {
        std::cerr << "Failed to retrieve Level." << std::endl;
        return;
    }

    Actors = &Level->Actors;
    if (!Actors)
    {
        std::cerr << "Failed to retrieve Actors array." << std::endl;
    }
}