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
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}
	putchar(10);
	return (0);
}
