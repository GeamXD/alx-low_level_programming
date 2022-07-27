#include "main.h"
/**
 * _isupper - checks for digits
 * @c: parameter
 * Return: 1 if successful
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

