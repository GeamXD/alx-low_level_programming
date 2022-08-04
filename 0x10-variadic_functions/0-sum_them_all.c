#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums it all
 * @n: parameter
 * Return: SUM
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	int i = 0, sum = 0;

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, const unsigned int);
		i++;
	}
	va_end(ap);
	return (sum);
}
