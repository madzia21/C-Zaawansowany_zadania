#pragma once
#include <iostream>
//Zadanie 13
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedziału 1 - 100, a uzytkownik proboje zgadnąć.
//Po kazdej próbie program podpowiada czy liczba jest większa czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomić gracza o tym, że jest blisko.
//Zadanie można rozwiązac za pomocą jednej klasy GuessTheNumber

class GuessTheNumber
{private:
	int _secretNumber;
public:
	GuessTheNumber(int range1=1, int range2=100);
	void enterYourGuess();
	bool check(int guessedNumber);
	static bool response(std::string response);
	int getSecretNumber() const;
};

enum Response
{
	YES,
	yes,
	y,
	Yes
};



