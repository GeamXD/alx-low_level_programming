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
	unsigned int res = 0;
	int sign = 1, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if ('0' <= s[i] && s[i] <= '9')
			break;
	}
	while ('0' <= s[i] && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
