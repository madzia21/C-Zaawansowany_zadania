#include "pch.h"
#include "../Zadanie_6/PrimeNumbers.hpp"

TEST(IntegerNumbersC_tor, C_tor_firstItem_DefaultValues_returns_1) 
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.getInteger(0), 1);
}
TEST(IntegerNumbersC_tor, C_tor_lastItem_DefaultValues_returns_1000)
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.getInteger(999), 1000);
}
// czy można przetestować wyjątek??????????
//TEST(IntegerNumbersC_tor, getElement_outOfRangeException) 
//{
//	IntegerNumbers kontener;
//	EXPECT_EQ(kontener.getElement(1000), 100);
//}
TEST(IntegerNumbersC_torParam, C_tor_firstItem_returns_4)
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.getInteger(3), 4);
}
TEST(IntegerNumbersC_torParam, C_tor_lastItem_returns_100)
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.getInteger(99), 100);
}
TEST(IntegerNumbers, IsPrimeNumber_returns_false)
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.isPrimeNumber(1),false);
}
TEST(IntegerNumbers, IsPrimeNumber_returns_true)
{
	IntegerNumbers kontener;
	EXPECT_EQ(kontener.isPrimeNumber(11), true);
}