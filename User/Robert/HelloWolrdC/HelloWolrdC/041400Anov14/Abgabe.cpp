#include "stdafx.h"
#include "Abgabe.h"

void CalculateTwoTimesAndPrint();

int CalculatePow(int a, int n);
int CalculatePowComplicated(int a, int n);

int CollatzLength(int number);
void LongestCollatz();

void Task1()
{
	printf("==================================\r\nAufgabe 1\r\n==================================\r\n");

	CalculateTwoTimesAndPrint();
}

/* Calling Code */
void Task2()
{
	printf("\r\n==================================\r\nAufgabe 2\r\n==================================\r\n");

	/* Berechnung 2^4*/
	printf("a): %d \r\n", CalculatePow(2, 1));

	/* Berechnung 2^4*/
	printf("b): %d \r\n", CalculatePowComplicated(2, 1000000000));
}

void Task3()
{
	printf("\r\n==================================\r\nAufgabe 3\r\n==================================\r\n");
	/* Collatz Längenberechnung für 99 (26) */
	printf("Laenge der Folge fuer n = 99: %i \r\n", CollatzLength(99));

	/* Collatz Längen Berechnungen für 208 (14) */
	printf("Laenge der Folge fuer n = 208: %i \r\n", CollatzLength(208));

	/* Collatz Längen Berechnung für 5436 (68) */
	printf("Laenge der Folge fuer n = 54: %i \r\n", CollatzLength(5436));

	/* Berechnung der längsten Collatz Folge (871, mit 179)*/
	LongestCollatz();
	// printf("Laengste Folge fuer n < 1000: %d \r\n", 
}

/* Code for Task 1 */
void CalculateTwoTimesAndPrint()
{
	char x1, x2, result;

	/*First calculation */
	x1 = 35;
	x2 = 85;

	result = x1 + x2;
	printf("Beispiel 1: %hi + %hi = %hi\n", x1, x2, result);

	/* Second calculation */
	x1 = 85;
	x2 = 85;
	result = x1 + x2;
	printf("Beispiel 2: %hi + %hi = %hi\n", x1, x2, result);

}

/* Code for Task 2*/
int CalculatePow(int a, int n)
{
	int result = a;

	for (int i = 0; i < (n - 1); i++)
	{
		result *= a;
	}

	return result;
}

int CalculatePowComplicated(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n % 2 == 0)
	{
		int result = 1;

		for (int i = 0; i < (n / 2); i++)
		{
			result *= a;
		}

		return (result * result);
	}
	else
	{
		int result = 1;

		for (int i = 0; i < ((n - 1) / 2); i++)
		{
			result *= a;
		}

		return ((result * result) * a);
	}
}

/* Code for Task 3*/
int  CollatzLength(int number)
{
	int count = 1;

	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number = number / 2;
		}
		else
		{
			number = 3 * number + 1;
		}

		//  printf_s("%i \r\n", number);

		count++;
	}

	return count;
}

void LongestCollatz()
{
	int longestCollatz = 1;
	int current;

	int i = 999;
	while (i != 1)
	{
		int newLength = CollatzLength(i);

		if (newLength > longestCollatz)
		{
			longestCollatz = newLength;
			current = i;
		}

		i--;
	}

	printf("Laengste Folge fuer %d mit %d", current, longestCollatz);
}