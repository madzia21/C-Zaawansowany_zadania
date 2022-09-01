
#include <iostream>
#include "StringCensor.hpp"

int main()
{
    StringCensor censor;
    censor.addCensoredLetter('a');
    std::cout << censor.censor("Mada") << std::endl;
    censor.addCensoredLetter('d');
    std::cout << censor.censor("Mada");
}