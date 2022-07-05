#include "main.h"

/**
  *print_last_digit - prints out last digit
  *@c: value being checked
  *
  *Return: last digit if successful
  */
int print_last_digit(int c)
{
	int j;

	if (c >= 0)
		j = c % 10;
	else
		j = -1 * (c % 10);

	_putchar ((j) + '0');

	return (j);

}
