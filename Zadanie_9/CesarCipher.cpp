#include "CesarCipher.hpp"
#include <algorithm>

std::string CesarCipher::cypher(std::string text, int secretValue)
{
    auto keyCipher = [secretValue](char &c) {
        c += secretValue;
    };
    std::for_each(text.begin(), text.end(), keyCipher);
    return text;
}

std::string CesarCipher::decepher(std::string text, int secretValue)
{
    auto keyDecipher = [secretValue](char &c) {
        c -= secretValue;
    };
    std::for_each(text.begin(), text.end(), keyDecipher);
    return text;
}
