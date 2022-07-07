#include "main.h"
#include <ctype.h>
/**
 * _isupper - to check for uppercase
 * @c: parameter being checked
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
