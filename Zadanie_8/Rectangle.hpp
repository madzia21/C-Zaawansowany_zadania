#pragma once

//Klasy: Rectangle(przechowuje długości boków, wylicza pole, isSquare())

class Rectangle
{
private:
	int _sideA;
	int _sideB;
public:
	Rectangle(int sideA=0, int sideB=0);
	int area() const;
	bool isSquare();
	bool is2D();
	int getSideA() const;
	int getSideB() const;
};

