#pragma once
#include <string>
#include <vector>
//Zadanie 4
//Napisz klasę, która umożliwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//
//https ://morsecode.world/international/translator.html

struct MorseLatinLetters
{
	char latin;
	std::string morse;
	
};

class MorseCodeTranslator
{
public:
	std::vector<MorseLatinLetters> alphabet{
		{'a',".-"},
		{'b',"-..."},
		{'c',"-.-."}
	};
	std::string toMorseCode(std::string latinString);
	std::string fromMorseCode(std::string morseString);
};

