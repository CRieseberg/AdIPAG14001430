// Aufgabe 2.1
int Addieren(int n)
{
	int a = 0;
	
	for (int i = 1; i <= n; i++)
	{
		a += i;
	}
	
	return a;
}

// Aufgabe 2.2
int AddierenQuadratzahl(int number)
{
	int a = 0;
	
	for(int i = 1; i <= number; i++)
	{
		a = a + (i*i);
	}
	
	return a;
}
