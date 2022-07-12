#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n arrays times
 * @a: array
 * @n: no of times
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
