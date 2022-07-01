#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int ap;
	int apl;

	for (ap = 97; ap <= 122; ap++)
	{
		putchar(ap);
	}
	for (apl = 65; apl <= 90; apl++)
	{
		putchar(apl);
	}
	putchar(10);

	return (0);
}
