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
	int n;
	int last_digit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* to print last digit  */
	if (n > 5)
	{
		last_digit = n % 10;
		printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
	}
	else if (n == 0)
	{
		last_digit = n % 10;
		printf("%s %d is %d and is 0\n", str, n, last_digit);
	}
	else
	{
		last_digit = n % 10;
		printf("%s %d is %d and is less  than 6 and not 0\n", str, n, last_digit);
	}
	return (0);
}
