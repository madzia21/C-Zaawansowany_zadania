#pragma once
#include <string>
//Zadanie 9
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara

class CesarCypher
{
public:
	std::string encrypt(std::string text, int secretValue);
	std::string decipher(std::string text, int secretValue);
};

