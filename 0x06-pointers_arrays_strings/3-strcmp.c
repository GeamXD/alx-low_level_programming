#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: char*
 */
int _strcmp(char *s1, char *s2)
{
	int i, a1, a2;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		a1 = (int) s1[i];
		a2 = (int) s2[i];

		if (s1[i] != s2[i])
			return (a1 - a2);
	}
	return (0);
}
