#pragma once
#include <vector>

//Zadanie  7
//Stworz listę 50 liczb całkowitych dodatnich i wypełnij ją losowymi wartościami.Wypisz ją.
//Następnie posortuj i wypisz listę tak, by na początku znalazły się wartości parzyste uporządkowane rosnąco, a za nimi wartości nieparzyste uporządkowane malejąco.
//Podpowiedz: Podziel listę na dwie osobne, odpowiednio posortuj, a następnie ja połącz w jedną.

class RandomIntegers
{
private:
	std::vector<int> _randomIntegers;
public:
	RandomIntegers();
	void displayIntegers() const;
	void sortAndDisplayIntegers();
};

