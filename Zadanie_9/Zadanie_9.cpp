#include <iostream>
#include "CesarCipher.hpp"

int main()
{
    CesarCipher tekst;
    std::string cipheredText = tekst.cypher("mama", 1);
    std::cout << cipheredText << std::endl;
    std::string decipheredText = tekst.decepher(cipheredText, 1);
    std::cout << decipheredText << std::endl;
}
