#include <stdio.h>

void primefactors(long int num);

/**
 * main - prints largest prime factor
 * Return: 0 if successful
 */
int main(void)
{
	long int num = 612852475143;

	primefactors(num);
	return (0);
}

/**
 * primefactors - function to print largest prime factors
 * @num: parameter being checked
 */
void primefactors(long int num)
{
	int i;

	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
		if (num == 1)
		{
			printf("%d\n", i);
		}
	}
}

