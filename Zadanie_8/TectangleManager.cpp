#include "TectangleManager.hpp"
#include <algorithm>
#include <iostream>

RectangleManager::RectangleManager(int howMany, int range1, int range2)
{
	Rectangle rectangle;
	for (int i = 0; i < howMany; ++i)
	{
		rectangle = RectangleGenerator::rectangleGenerator(range1, range2);
		rectangles.push_back(rectangle);
	}
}

void RectangleManager::printRectangles() const
{
	int i = 1;
	auto printRectangle = [&i](Rectangle r) {
		
		std::cout << i++ << ". sideA = " << r.getSideA() << ", sideB = " << r.getSideB() << std::endl;
	};
	std::for_each(rectangles.begin(), rectangles.end(), printRectangle);
	std::cout << "#################  test   #################" << std::endl;
}

size_t RectangleManager::countRectangleBiggerThen(int area)
{
	// Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
	auto  areaGreaterThen50 = [area](Rectangle r) {
		return r.area() > area;
	};
	size_t counter = std::count_if(rectangles.begin(), rectangles.end(), areaGreaterThen50);
	//std::count_if();
	return counter;
}
// Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0
void RectangleManager::deleteInvalid()
{
	auto it = rectangles.begin();
	while (it != rectangles.end())
	{
		if (!((*it).is2D()))
		{
			it = rectangles.erase(it);
		}
		else
		{
			++it;
		}
	}
}

//metody ktore chcemy wolac w tej specjalizacji musza byc tez const

template<> class std::greater<Rectangle> {
public:
	bool operator()(const Rectangle& lhs, const Rectangle& rhs) const
	{
		return lhs.area() > rhs.area();
	}
};

void RectangleManager::sortAreaDescending()
{
	std::sort(rectangles.begin(), rectangles.end(), std::greater<Rectangle>());
}

std::vector<Rectangle> RectangleManager::copyRectangles()
{
	std::vector<Rectangle> squares;
	auto it = rectangles.begin();
	while (it != rectangles.end())
	{
		if ((*it).isSquare())
		{
			squares.push_back(*it);
			std::cout << "KWADRAT: sideA: " << (*it).getSideA() << ", sideB: " << (*it).getSideB() << std::endl;
		}
		++it;
	}
	return squares;
}
