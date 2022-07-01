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

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n >= 48 && n < 57)
		{
		putchar(44);
		putchar(32);
		}
		else 
			continue;
	}
	putchar(10);
	return (0);
}
