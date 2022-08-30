#include "PrimeNumbers.hpp"
#include <algorithm>
#include <iostream>

IntegerNumbers::IntegerNumbers(int begin, int end)
{
	for (int i = begin; i <= end; ++i)
	{
		integersContainer.push_back(i);
	}
}

int IntegerNumbers::getInteger(int index)
{
	if (index < 0 || index > integersContainer.size())
		throw std::out_of_range("Nie ma elementu o takim indeksie.");
	return integersContainer[index];
}

void IntegerNumbers::extractPrimeNumbers()
{
	for (auto x : integersContainer)
	{
		if (isPrimeNumber(x))
		{
			primeNumbers.push_back(x);
		}
		else
		{
			notPrimeNumbers.push_back(x);
		}
	}
}

void IntegerNumbers::displayPrimeNumbers() const
{
	for (auto x : primeNumbers)
	{
		std::cout << x << ", ";
	}
}

void IntegerNumbers::displayNonPrimeNumbers() const
{
	for (auto x : notPrimeNumbers)
	{
		std::cout << x << ", ";
	}
}

bool IntegerNumbers::isPrimeNumber(int n) const
{
	bool primeNumber = true;
	if (n == 0 || n == 1)
	{
		primeNumber = false;
	}
	for (int i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			primeNumber = false;
			break;
		}
	}
	return primeNumber;
}