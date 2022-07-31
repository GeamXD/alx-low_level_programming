#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the lenght of a string
 * @s: parameter being checked
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	return (i);
}
