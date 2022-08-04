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
	va_list(ap);
	unsigned int i, res = 0;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, const unsigned int);
		printf("%d", res);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
