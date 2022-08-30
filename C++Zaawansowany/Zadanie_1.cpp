//Zadanie 1
//Napisz funkcję, która odwróci podanego stringa.

#include <iostream>
#include <algorithm>

std::string reverseString(std::string ciag_znakow) // odwraca string, ale nie zmienia oyginalnego stringa
{
    std::reverse(ciag_znakow.begin(), ciag_znakow.end());
    return ciag_znakow;
}

int main()
{
    std::cout << reverseString("cud malina");

}