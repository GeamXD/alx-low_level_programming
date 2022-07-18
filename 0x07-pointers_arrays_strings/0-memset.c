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
	return (memset(s, b, n));
}
