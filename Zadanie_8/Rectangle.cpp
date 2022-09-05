#include "Rectangle.hpp"

Rectangle::Rectangle(int sideA, int sideB)
{
    _sideA = sideA;
    _sideB = sideB;
}

int Rectangle::area() const
{
    return _sideA * _sideB;;
}

bool Rectangle::isSquare()
{
    if (_sideA == _sideB)
        return true;
    else
        return false;
}

bool Rectangle::is2D()
{
    bool result = true;
    if ((_sideA == 0) || (_sideB == 0))
    {
        result = false;
}
    return result;
}

int Rectangle::getSideA() const
{
    return _sideA;
}

int Rectangle::getSideB() const
{
    return _sideB;
}
