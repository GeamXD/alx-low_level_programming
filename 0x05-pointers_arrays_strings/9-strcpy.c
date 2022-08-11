#include "main.h"
#include <stdio.h>


/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i++] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}



/**
 * _strcpy2 - copies a string
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy2(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest);
}