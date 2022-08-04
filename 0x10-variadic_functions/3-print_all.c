#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_int - prints int
 * @ap: parameter for list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}



/**
 * print_float - prints float
 * @ap: parameter for list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}



/**
 * print_char - prints string
 * @ap: parameter for list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}



/**
 * print_string - prints string
 * @ap: parameter for list
 */
void print_string(va_list ap)
{
	char *res = va_arg(ap, char *);

	if (res == NULL)
		printf("(nil)");
	else
	printf("%s", res);
}


/**
 * print_all - prints anything
 * @format: arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	int i = 0, j = 0;
	char *separator = "";

print_anyStruct printType[] = {
	{"i", print_int },
	{"f", print_float},
	{"s", print_string},
	{"c", print_char},
	{NULL, NULL}
};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", separator);
				printType[j].printfunc(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
