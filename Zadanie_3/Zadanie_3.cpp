

#include <iostream>
#include "StringConverter.hpp"

int main()
{
    std::string cc = StringConverter::toCamelCase("is_this_first_entry");
    std::cout << cc << std::endl;
    std::string sc = StringConverter::toSnakeCase("camelCase");
    std::cout << sc << std::endl;
}