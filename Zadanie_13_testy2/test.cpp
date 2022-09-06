#include "pch.h"
#include "../Zadanie_13/GuessTheNumber.hpp"

TEST(GuessTheNumberClass, check_inputSecretNumber_ReturnsTrue) 
{
	GuessTheNumber game;
	EXPECT_EQ(game.check(game.getSecretNumber()), true);
}

TEST(GuessTheNumberClass_, Check_InputSecretNumberMinus1_ReturnsFalse)
{
	GuessTheNumber game;
	int secretNumberMinus1 = (game.getSecretNumber()) - 1;
	EXPECT_EQ(game.check(secretNumberMinus1), false);
}