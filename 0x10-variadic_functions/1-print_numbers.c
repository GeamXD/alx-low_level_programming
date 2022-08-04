 #include <stdarg.h>
 #include "variadic_functions.h"
 #include <stdlib.h>
 #include <stdio.h>

 /**
  * print_numbers - prints numbers 
  * @n: no of arguments 
  * @separator: string
  * Return: Nothing
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
 /**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
