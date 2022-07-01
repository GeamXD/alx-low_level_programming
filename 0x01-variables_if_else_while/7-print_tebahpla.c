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

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
