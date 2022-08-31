//Zadanie 2
//Napisz funkcję, która przyjmie dwa stringi i zwróci ile liter mają wspólnych.

#include <iostream>
#include <string>
#include <algorithm>


// 65 - 90 = 26
// 97 - 122  26

int countCommonLetters(std::string string1, std::string string2)
{
    int counter = 0;
    char c = 'a';
    char cB = 'A';
   
    while (c < 123)
    {
        auto result1 = std::search_n(string1.begin(), string1.end(),1,c);
        auto result2 = std::search_n(string2.begin(), string2.end(), 1, c);
        
        if (result1 != string1.end() && result2 != string2.end()) 
        {
            counter++;
        }
        c++;
   }
    while (cB < 91)
    {
        auto result3 = std::search_n(string1.begin(), string1.end(), 1, cB);
        auto result4 = std::search_n(string2.begin(), string2.end(), 1, cB);
        if (result3 != string1.end() && result4 != string2.end())
        {
            counter++;
        }
        cB++;
    }
    return counter;
}

int main()
{
    int result = countCommonLetters("AaZz", "AaDdBbEeZz");
    std::cout << result;
}