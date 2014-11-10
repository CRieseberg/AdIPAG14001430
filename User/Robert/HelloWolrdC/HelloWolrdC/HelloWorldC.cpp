#include "stdafx.h"
#include <iostream>
#include <string>
#include ".\041400Anov14\Abgabe.h"
#include ".\111400Anov14\Aufgabe2.h"

void MethodsFor041400Anov14();
void MethodsFor111400Anov14();

int main()
{
	// MethodsFor041400Anov14();

	MethodsFor111400Anov14();

	return 0;
}

void MethodsFor041400Anov14()
{
	Task1();

	Task2();

	Task3();
}

void MethodsFor111400Anov14()
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
}