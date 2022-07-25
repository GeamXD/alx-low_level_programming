#include <stdio.h>

/**
 * main - fibonacci
 * Return: 0 if successful
 */
int main(void)
{
	long int sum = 0;
	long int term1 = 0;
	long int term2 = 1;
	long int fibn = 0;

	for (int i = 0; i < 50; i++)
	{
		fibn = term1 + term2;
		if ((fibn <= 4000000) && (fibn % 2 == 0))
	{
		sum = sum + fibn;
	}
		term1 = term2;
		term2 = fibn;
	}
		printf("%ld\n", sum); /*add 2 since its 1st even digit*/
	return (0);
}

