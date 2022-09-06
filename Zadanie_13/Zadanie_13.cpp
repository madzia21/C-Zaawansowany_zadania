//Zadanie 13
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedziału 1 - 100, a uzytkownik proboje zgadnąć.
//Po kazdej próbie program podpowiada czy liczba jest większa czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomić gracza o tym, że jest blisko.
//Zadanie można rozwiązac za pomocą jednej klasy GuessTheNumber

#include <iostream>
#include "GuessTheNumber.hpp"
#include <algorithm>
#include <map>

int main()
{
    std::cout << "Do you want to guess the secret number? (yes/no)" << std::endl;
    std::string response;
    std::cin >> response;
   // yourResponse = static_cast<Response>(response);
  
    GuessTheNumber* game;
   
    if (GuessTheNumber::response(response))
    {
        std::cout << "Do you want to guess the number from the range of your choice? (yes - range of your choice / no - default range)" << std::endl;
        std::cin >> response;
       
        if (GuessTheNumber::response(response))
        {
            std::cout << "Enter range of your choice (number1, number2): " << std::endl;
            int x, y;
            std::cin >> x >> y;
            game = new GuessTheNumber(x, y);
        }
        else
        {
            game = new GuessTheNumber();
        }
            std::cout << "Wellcome to the game" << std::endl;
            int guessNumber;
            do
            {
                game->enterYourGuess();
                std::cin >> guessNumber;
            } while (!game->check(guessNumber));
         
    }
    else
    {
        std::cout << "Goodbye" << std::endl;
    }
}