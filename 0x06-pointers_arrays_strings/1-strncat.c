#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - appends two string at n point
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return:char*
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
