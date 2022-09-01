#pragma once
#include <string>
//Zadanie 9
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara

class CesarCipher
{
public:
	std::string cypher(std::string text, int secretValue);
	std::string decepher(std::string text, int secretValue);
};

