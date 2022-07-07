#include "main.h"
#include <ctype.h>
/**
 * _isdigit - to check for uppercase
 * @c: parameter being checked
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
