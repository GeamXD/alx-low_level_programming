#include <string.h>
#include "main.h"

/**
 * _memcpy - memcpy
 * @dest: destination
 * @src: source
 * @n:parameter
 * Return: memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
