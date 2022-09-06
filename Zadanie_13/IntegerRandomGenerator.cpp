#include "IntegerRandomGenerator.hpp"
#include <random>

int IntegerRandomGenerator::integerRandomGenerator(int x, int y)
{
    std::random_device grain;
    std::default_random_engine engine(grain());
    std::uniform_int_distribution<int> distribution(x, y);
    int selectedNumber = distribution(engine);
    return selectedNumber;
}
