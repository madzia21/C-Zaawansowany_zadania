#pragma once
#include <vector>
#include <stdexcept>

class IntegerNumbers
{
private:
	std::vector<int> integersContainer;
	std::vector<int> primeNumbers;
	std::vector<int> notPrimeNumbers;
public:
	IntegerNumbers(int begin=1, int end=1000);
	int getInteger(int index);
	bool isPrimeNumber(int n) const;
	void extractPrimeNumbers();
	void displayPrimeNumbers() const;
	void displayNonPrimeNumbers() const;
};

