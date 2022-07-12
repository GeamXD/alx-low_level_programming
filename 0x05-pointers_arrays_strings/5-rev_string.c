#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string being reversed
 */
void rev_string(char *s)
{
	int i = strlen(s), j = 0;
	char temp;

	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
