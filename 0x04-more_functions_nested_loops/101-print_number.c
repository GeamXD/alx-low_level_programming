#include "main.h"
/**
 * print_number - prints numbers
 * @n: parameter
 */
void print_number(int n)
{
	int neg;

	if (n < -99)
	{
		neg = n * -(1);

		_putchar('-');
		_putchar((neg / 100) + '0');
		_putchar(((neg / 10) % 10) + '0');
		_putchar((neg % 10) + '0');
	}
	if (n < -9)
	{
		neg = n * -(1);
		_putchar('-');
		_putchar((neg / 10) + '0');
		_putchar((neg % 10) + '0');
	}
	if (n >= 0)
	{
		if (n > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar(((n % 1000) / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar((n % 10) + '0');
		} else if (n > 99)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		} else if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		_putchar(n + '0');
	}
}

