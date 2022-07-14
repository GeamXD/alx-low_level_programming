#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - makes a string uppercase
 * @a: parameter
 * Return: char*
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
