//Zadanie 2
//Napisz funkcję, która przyjmie dwa stringi i zwróci ile liter mają wspólnych.

#include <iostream>
#include <string>
#include <algorithm>

int countCommonLetters(std::string string1, std::string string2)
{
    int counter = 0; 
        for (int i = 0; i < string1.size(); ++i)
        {
            for (int j = 0; j < string2.size(); ++j)
            {
                if (string1[i] == string2[j])
                {
                    ++counter;
                }
            }
        }
    return counter;
}

int main()
{
    int result = countCommonLetters("tola", "ola");
    std::cout << result;
}