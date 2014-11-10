#include "stdafx.h"
#include "Aufgabe2.h"
#include <math.h>
#include <stdio.h>

/* Find out the prime factors of a given number and print them on the screen */
void factorizeNumber(int n)
{
	int d = 2;
	if (n < 2) return;
	printf("Prime factors of '%d': ", n);
	/* while the factor being tested
	* is lower than the number to factorize */
	while (d < n) 
	{
		/* valid prime factor */
		if (n % d == 0) 
		{
			printf("%d x ", d);
			n /= d;
		}
		/* invalid prime factor */
		else 
		{
			if (d == 2)
			{
				d = 3;
			}
			else
			{
				d += 2;
			}
		}
	}
	/* print last prime factor */
	printf("%d\n", d);
}

void printIfPerfectNumber(int n)
{
	if (testIfPerfectNumber(n) == 1)
	{
		printf("%d is a perfect number\r\n", n);
	}
	else
	{
		printf("%d is not a perfect number\r\n", n);
	}
}

int testIfPerfectNumber(int n)
{
	/* Declare the local variables*/
	int i = 1, sum = 0;

	while (i < n)
	{
		if (n %i == 0)
		{
			sum += i;
		}
		i++;
	}

	if (sum == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
