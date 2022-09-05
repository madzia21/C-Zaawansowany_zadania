#pragma once
#include <vector>
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"

// RectangleManger(tutaj faktycznie implementujemy zadania)
//Utwórz wektor 100 prostokątów o losowych długościach boków z przedziału 0, 10 (użyj liczb całkowitych)
//a) void printRectangles() - Wypisz wszystkie prostokąty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostokątów malejaco według pola powierzchni
//e) void deleteInvalid() Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0

class RectangleManager
{
private:
	std::vector<Rectangle> rectangles;
public:
	RectangleManager(int howMany, int range1, int range2);
	void printRectangles() const;
	size_t countRectangleBiggerThen(int area);
	void deleteInvalid();
	void sortAreaDescending();
	std::vector<Rectangle> copyRectangles();

};

