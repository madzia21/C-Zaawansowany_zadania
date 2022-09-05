//Zadanie 8
//Klasy: Rectangle(przechowuje długości boków, wylicza pole, isSquare()), RectangleGenerator(Klasa genreująca losowy prostokąt o boku z podanego przedziału), 

#include <iostream>
#include "TectangleManager.hpp"

int main()
{
    RectangleManager rectManager(100, 0, 10);
    rectManager.printRectangles();
    rectManager.sortAreaDescending();
    rectManager.printRectangles();
    size_t counter = rectManager.countRectangleBiggerThen(50);
    std::cout << counter << std::endl;
    rectManager.deleteInvalid();
    rectManager.printRectangles();
    std::vector<Rectangle> squares = rectManager.copyRectangles();
    //rectManager.copyRectangles();
}
