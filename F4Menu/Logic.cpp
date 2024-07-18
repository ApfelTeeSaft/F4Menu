#include "Logic.hpp"
#include "Game.h"
#include "Classes.hpp" // Include to ensure UE4::UObject is defined

namespace Logic {
    void ToggleFlyingMode(bool enableFlying) {
        auto PlayerController = Game::GetPlayerController();
        if (PlayerController) {
            auto Pawn = Game::GetPawn();
            if (Pawn) {
                constexpr int MOVE_Flying = 2;
                constexpr int MOVE_Walking = 0;

                if (enableFlying) {
                    Pawn->SetMovementMode(MOVE_Flying);
                }
                else {
                    Pawn->SetMovementMode(MOVE_Walking);
                }
            }
        }
    }
}