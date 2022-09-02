#include "pch.h"
#include "../Zadanie_9/CesarCipher.hpp"

TEST(ClassCesarCypher, encryption_valueA_returnsZ) 
{
	CesarCypher text;
	EXPECT_EQ(text.encrypt("a",25), "z");
}
TEST(ClassCesarCypher, encryption_valueZ_returnsA)
{
	CesarCypher text;
	EXPECT_EQ(text.encrypt("z", 1), "a");
}
TEST(ClassCesarCypher, encryption_valuetata_returnsbibi)
{
	CesarCypher text;
	EXPECT_EQ(text.encrypt("tata", 8), "bibi");
}
TEST(ClassCesarCypher, decryption_valuebibi_returnstata)
{
	CesarCypher text;
	EXPECT_EQ(text.decipher("bibi",8), "tata");
}
TEST(ClassCesarCypher, decryption_valueA_returnsZ)
{
	CesarCypher text;
	EXPECT_EQ(text.decipher("a", 1), "z");
}
TEST(ClassCesarCypher, decryption_valueZ_returnsA)
{
	CesarCypher text;	
	EXPECT_EQ(text.decipher("z", 1), "y");
}
