#include "StringCensor.hpp"
#include <stdexcept>
#include <algorithm>

void StringCensor::addCensoredLetter(char c)
{
	if (!_censoredLetters.size())
	{
		throw std::out_of_range("pusty kontener");
	}
	_censoredLetters.push_back(c);
}

std::string StringCensor::censor(std::string stringToBeCensored)
{
	for (int i = 0; i < stringToBeCensored.size(); ++i)
	{
		std::for_each(_censoredLetters.begin(), _censoredLetters.end(), [&stringToBeCensored, i](char c) {if (stringToBeCensored[i] == c) stringToBeCensored[i] = '*'; });
	}
	return stringToBeCensored;
}
