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
	return (memcpy(dest, src, n));
}
