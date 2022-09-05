#include "RectangleGenerator.hpp"
#include <random>

Rectangle RectangleGenerator::rectangleGenerator(int x, int y)
{
    std::random_device grain;
    std::default_random_engine engine(grain());
    std::uniform_int_distribution<int> distribution(x,y);
    int side1 = distribution(engine);
    int side2 = distribution(engine);
    Rectangle rect(side1, side2);
    return rect;
}
