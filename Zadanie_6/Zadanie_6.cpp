//Zadanie 6
//Stwórz listę liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.

#include <iostream>
#include "PrimeNumbers.hpp"

int main()
{
    IntegerNumbers object(1,100);
    object.extractPrimeNumbers();
    std::cout << "display prime numbers from the set:" << std::endl;
    object.displayPrimeNumbers();
    std::cout << std::endl;
    std::cout << "display non prime numbers from the set:" << std::endl;
    object.displayNonPrimeNumbers();
}