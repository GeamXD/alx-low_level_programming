#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		int nn;

		for (nn = n + 1; nn < 10; nn++)
		{
			putchar((n % 10) + '0');
			putchar((nn % 10) + '0');

		if (n != 8)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
		}
	}
	putchar(10);
	return (0);
}
