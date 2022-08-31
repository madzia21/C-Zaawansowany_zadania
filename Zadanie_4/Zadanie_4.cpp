//Zadanie 4
//Napisz klasę, która umożliwi kodowanie i dekodowanie stringa na alfabet Morsea.Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//
//https ://morsecode.world/international/translator.html

#include <iostream>
#include "MorseCodeTranslator.hpp"

int main()
{
    MorseCodeTranslator translator;
    std::string morse = translator.toMorseCode("acb");
    std::cout << morse << std::endl;
    std::cout << translator.fromMorseCode(morse);
}
