#include "RandomIntegers.hpp"
#include <random>
#include <iostream>
#include <algorithm>
#include <vector>

RandomIntegers::RandomIntegers()
{
    std::random_device grain;
    std::default_random_engine engine(grain());
    std::uniform_int_distribution<int> distribution(1, 1000);
    for (int i = 0; i < 50; i++)
    {
        _randomIntegers.push_back(distribution(engine));
    }
    displayIntegers();
}

void RandomIntegers::displayIntegers() const
{
    int i = 0;
    for (auto x : _randomIntegers)
    {
        std::cout <<" [ " << i << " ] " << x;
        i++;
        if (!(i % 10))
        {
            std::cout << std::endl;
        }
    }
}

void RandomIntegers::sortAndDisplayIntegers()
{
    std::vector<int> odd;
    std::vector<int> even;
    auto isodd = [&even, &odd](int number) {
        if (number % 2)
        {
            even.push_back(number);
        }
        else
            odd.push_back(number);
    };
    std::for_each(_randomIntegers.begin(), _randomIntegers.end(), isodd);
    std::sort(even.begin(), even.end());
    std::sort(odd.begin(), odd.end());
    std::reverse(odd.begin(), odd.end());
    _randomIntegers = even;
    _randomIntegers.insert(_randomIntegers.end(), odd.begin(), odd.end());
    displayIntegers();
}
