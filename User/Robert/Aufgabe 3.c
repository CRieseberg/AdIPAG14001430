// Aufgabe 3.1
bool TestForNegativeNumber(int numberToTest)
{
	if(n < 0)
	{
		return false;
	}
}

// Aufgabe 3.2

#include <math.h>

bool PrimeTest(int numberToTest)
{
	int n = 2;

	if (n > sqrt(numberToTest))
	{
		return true;
	}

	if(numberToTest % n == 0)
	{
		return false;
	}
}