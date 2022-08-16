#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - appends a string to another string
 * @dest: destination
 * @src: source
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	; /* counts to end of dest*/
	for (j = 0;  src[j] != '\0'; j++) /* appends src to end of dest*/
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);

}
