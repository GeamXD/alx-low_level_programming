#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints string
 * @separator: string
 * @n: integer parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *res;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, char *);
		if (res != NULL)
			printf("%s", res);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
