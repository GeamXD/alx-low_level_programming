#include "main.h"
#include <stdio.h>

/**
  *print_to_98 - prints all natural numbers from n to 98
  *@n: natural number
  *
  */
void print_to_98(int n)
{
	int m, b;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (j != 98)
				printf("%d, ", b);
			else if (j == 98)
				printf("%d\n", b);
		}
	}
}
