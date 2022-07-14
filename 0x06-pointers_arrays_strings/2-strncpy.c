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
	return (strncpy(dest, src, n));
}
