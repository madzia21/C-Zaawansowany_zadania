#include "MorseCodeTranslator.hpp"
#include <algorithm>

std::string MorseCodeTranslator::toMorseCode(std::string latinString)
{
    std::string morseString;
    for (auto x : latinString)
    {
        std::for_each(alphabet.begin(), alphabet.end(), [&morseString, x](MorseLatinLetters s) {if (x == s.latin) morseString += (s.morse + ' '); });
    }
    return morseString;
}

std::string MorseCodeTranslator::fromMorseCode(std::string morseString)
{
    std::string latinString;
    std::string latinLetter;
    for (int i = 0; i < morseString.size(); ++i)
    {
        while (morseString[i] != ' ')
        {
            latinLetter += morseString[i];
            i++;
        }
      std::for_each(alphabet.begin(), alphabet.end(), [&latinLetter, &latinString](MorseLatinLetters s) {if (latinLetter == s.morse) latinString += s.latin; });
      latinLetter.clear();
    }
    return latinString;
}
