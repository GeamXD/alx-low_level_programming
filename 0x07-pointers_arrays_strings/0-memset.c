#include <string.h>
#include "main.h"

/**
 * _memset - memset
 * @s: parameter
 * @b: parameter
 * @n:parameter
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
