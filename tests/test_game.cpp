//
// Created by maoyu on 2025/11/12.
//

#include "test_game.h"

#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "../src/game.h"

TEST_CASE("Rock beats scissors") {
    REQUIRE(decideWinner("rock", "scissors") == "Player 1");
}

TEST_CASE("Same choice = draw") {
    REQUIRE(decideWinner("paper", "paper") == "Draw");
}
