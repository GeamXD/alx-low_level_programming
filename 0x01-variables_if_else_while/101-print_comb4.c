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

	for (n = 0; n < 8; n++)
	{
		int nn;

		for (nn = n + 1; nn < 9; nn++)
		{
			int nnn;

			for (nnn = nn + 1; nnn < 10; nnn++)
			{
				putchar((n % 10) + '0');
				putchar((nn % 10) + '0');
				putchar((nnn % 10) + '0');
			if (n != 7)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
			}
		}
	}
	putchar(10);
	return (0);
}
