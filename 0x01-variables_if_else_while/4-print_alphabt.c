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

	for (ap = 97; ap <= 122; ap++)
	{
		if (ap == 101)
			continue;
		if (ap == 113)
			continue;
		putchar(ap);
	}
	putchar(10);

	return (0);
}
