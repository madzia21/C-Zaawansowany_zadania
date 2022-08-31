#include "StringConverter.hpp"
#include <algorithm>

std::string StringConverter::toCamelCase(std::string snake) // snake_case
{
    std::string firstPart;
    for (int i = 0; i < snake.size(); ++i) //s = 9
    {
        if (snake[i] == '_')
        {
            for (int j = 0; j < i; ++j)
            {
                firstPart += snake[j];
            }
            for (int k = i + 1; k < snake.size(); ++k)
            {
                if (k == i + 1)
                {
                    snake[k] = snake[k] - 32;
                }
                firstPart += snake[k];
            }
            snake = firstPart;
            firstPart.clear();
        }
    }
    return snake;
}

std::string StringConverter::toSnakeCase(std::string camel) // camelCase
{
    std::string firstPart;
    for (int i = 0; i < camel.size(); ++i)
    {
        if (std::isupper(camel[i]))
        {
            for (int j = 0; j < i; ++j)
            {
                firstPart += camel[j];
            }
            firstPart += '_';
            for (int k = i; k < camel.size()+1; ++k)
            {
                if (k==i)
                {
                    camel[k] = camel[k] + 32;
                }
                firstPart += camel[k];
            }
            camel = firstPart;
            firstPart.clear();
        }
    }
    return camel;
}
