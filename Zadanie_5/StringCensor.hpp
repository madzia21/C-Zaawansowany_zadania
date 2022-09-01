#pragma once
#include <string>
#include <vector>

//Zadanie 5
//Klasa: StringCensor
//Napisz klasę która będzie cenzurować podane stringi(zamieniać wymagane litery na gwiazkę), operacje która ma wspierać ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)*/

class StringCensor
{
private:
	std::vector<char> _censoredLetters{' '};
public:
	void addCensoredLetter(char c);
	std::string censor(std::string stringToBeCensored);
};

