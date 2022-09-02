#include "CesarCipher.hpp"
#include <algorithm>

std::string CesarCypher::encrypt(std::string text, int secretValue)
{
    auto keyCipher = [secretValue](char &c) {
        if ((c+secretValue) >= 122) //97
        {
            int tempSecretValue = secretValue - (122-c);
            if (tempSecretValue == 0)
            {
                c = 122;
            }else
            c = 96 + tempSecretValue;
        }
        else
        {
            c += secretValue;
        }
        
    };
    std::for_each(text.begin(), text.end(), keyCipher);
    return text;
}

std::string CesarCypher::decipher(std::string text, int secretValue)
{
    auto keyDecipher = [secretValue](char &c) {
        if ((c - secretValue) <= 97) //97
        {
            int tempSecretValue = secretValue - (c-97);
            if (tempSecretValue == 0)
            {
                c = 97;
            }
            else
            c = 123 - tempSecretValue;
        }
        else
        {
            c -= secretValue;
        }
        
    };
    std::for_each(text.begin(), text.end(), keyDecipher);
    return text;
}
