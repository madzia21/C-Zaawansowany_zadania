#pragma once
#include <string>
//Zadanie 3
//Napisz klasę StringConverter, która bedzie miała dwie metody(statyczne) :
//    std::string toCamelCase(std::string)
//    std::string toSnakeCase(std::string)
//    camelCase : snake_case
//    helloSDA : hello_S_D_A
//    getColour : get_colour
//    isThisFirstEntry : is_this_first_entry

class StringConverter
{
public:
	static std::string toCamelCase(std::string snake);
	static std::string toSnakeCase(std::string camel);
};

