#include "GuessTheNumber.hpp"
#include "IntegerRandomGenerator.hpp"
#include <iostream>

GuessTheNumber::GuessTheNumber(int range1, int range2)
{
	_secretNumber = IntegerRandomGenerator::integerRandomGenerator(range1, range2);
	std::cout << _secretNumber << std::endl;
}

void GuessTheNumber::enterYourGuess()
{
	std::cout << "Enter your guess:" << std::endl;
}

bool GuessTheNumber::check(int guessedNumber)
{
	bool result;
	int check = guessedNumber - _secretNumber;
	if (check != 0 && (check <=3 && check >= -3))
	{
		result = false;
		std::cout << "You are close." << std::endl;

	}
	if(check != 0)
	{
		result = false;
		
	}
	if(check ==0)
	{
		result = true;
		std::cout << "Congratulations. You won!" << std::endl;
	}
	
	return result;
}

bool GuessTheNumber::response(std::string response)
{
	if (response == "yes" || response == "Yes" || response == "YES" || response == "y")
		return true;
	else
		return false;
}

int GuessTheNumber::getSecretNumber() const
{
	return _secretNumber;
}
