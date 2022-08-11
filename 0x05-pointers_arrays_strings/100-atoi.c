#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: 1 if successful
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1; /* positive*/
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for ( ; s[i] != '\0'; i++)
	{
		res = res * 10 + (s[i] - '0');
	}

	return (sign * res);

}
