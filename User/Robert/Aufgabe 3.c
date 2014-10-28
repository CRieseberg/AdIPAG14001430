// Aufgabe 3.1
int TestForNegativeNumber(int numberToTest)
{
	if(n < 0)
	{
		return 0;
	}
}

// Aufgabe 3.2

#include <math.h>

int PrimeTest(int numberToTest)
{
	if (numberToTest == 1)
	{
		return 0;
	}
	
	for(i = 2; i < numberToTest; i++)
	{
		if((numberToTest % i) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
