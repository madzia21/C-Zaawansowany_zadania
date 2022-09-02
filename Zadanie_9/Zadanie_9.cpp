#include <iostream>
#include "CesarCipher.hpp"

int main()
{
    CesarCypher tekst;
    std::string cipheredText = tekst.encrypt("z", 25);
    std::cout << cipheredText << std::endl;
    std::string decipheredText = tekst.decipher(cipheredText, 25);
    std::cout << decipheredText << std::endl;
}
