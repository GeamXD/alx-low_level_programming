#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies n part of string
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	if (dest == NULL)
		return (NULL);

	while (src[i] != '\0' && i < n)
	{
		dest[i++] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
