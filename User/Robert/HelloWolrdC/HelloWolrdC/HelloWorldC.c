#include <stdio.h>
#include <stdlib.h>


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

/* Converts a given number to its binary representation unsing FOR
 * and prints it. */
void untprogFor(int z)
{
	/* Shift the bits of octal 1 31 to the left*/
	unsigned int mask = 01 << 31;

	/* iterate 31 times and decrement the int each time*/
	int i;
	for (i = 31; i >= 0; i--)
	{
		if ((z&mask) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		if ((i % 8 == 0) && mask != 1)
		{
			printf(".");
		}
		mask >>= 1;
	}
	printf("\n");
}

/* Converts a given number to its binary representation unsing WHILE
 * and prints it. */
void untprogWhile(int z)
{
	/* Shift the bits of octal 1 31 to the left*/
	unsigned int mask = 01 << 31;

	/* iterate 31 times and decrement the int each time*/
	int i = 31;
	while (i >= 0)
	{
		if ((z&mask) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		if ((i % 8 == 0) && mask != 1)
		{
			printf(".");
		}
		mask >>= 1;

		i--;
	}
	printf("\n");
}

void Aufgabe4()
{
	double *value;
	int size, i =0;

	printf("Wie viele Werte?");
	scanf_s("%d", &size);
	value = malloc(size*sizeof(int));

	/* Check if the array is NULL*/
	if (value == NULL)
	{
		printf("Fehler bei malloc....\n");
		return EXIT_FAILURE;
	}

	/* Get user input and store values in the array */
	while (i < size) {
		printf("Wert für value[%d] eingeben : ", i);
		scanf_s ("%lf", &value[i]);
		i++;
	}

	/* Artithmetical median */
	double result = 0;

	for (int c = 0; c < size; c++)
	{
		result = result + value[c];
	}

	result = (1 / (double)size) * result;
	printf("Artitmetisches Mittel: %lf \r\n", result);


	/* Stichprobenvarianz */
	double result2 = 0;
	for (int c = 0; c < size; c++)
	{
		result2 = (value[c] - result) * (value[c] - result);
	}

	result2 = (1 / ((double)size - 1)) * result2;
	printf("Stichprobenvarianz: %lf \r\n", result2);
}


int main()
{
	// Task No.1
	printf("==================================\r\nAufgabe 1\r\n==================================\r\n");
	factorizeNumber(42);


	//Task No.2.1
	printf("\r\n==================================\r\nAufgabe 2.1\r\n==================================\r\n");
	int numbersToTest[5] = { 14, 18, 25, 28, 51 };

	for (int i = 0; i < 5; i++)
	{
		printIfPerfectNumber(numbersToTest[i]);
	}

	// Task No.2.2
	printf("\r\n==================================\r\nAufgabe 2.2\r\n==================================\r\n");
	for (int i = 1; i < 500; i++)
	{
		if (testIfPerfectNumber(i) == 1)
		{
			printf("%d is a perfect number\r\n", i);
		}
	}

	// Task No.32.2
	printf("\r\n==================================\r\nAufgabe 3\r\n==================================\r\n");
	printf("Using FOR\r\n");
	untprogFor(3);
	untprogFor(8);
	untprogFor(42);

	printf("Using WHILE\r\n");
	untprogWhile(3);
	untprogWhile(8);
	untprogWhile(42);

	// Task No.4
	printf("\r\n==================================\r\nAufgabe 4\r\n==================================\r\n");
	Aufgabe4();

	return EXIT_SUCCESS;
}