 #include <stdarg.h>
 #include "variadic_functions.h"
 #include <stdlib.h>
 #include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		return;

	va_list(ap);
	int i, res = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, const unsigned int);
		printf("%d", res);
	}
	va_end(ap);
	printf("\n");
}
