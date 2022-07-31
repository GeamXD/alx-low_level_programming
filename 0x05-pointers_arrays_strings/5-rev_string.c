#include "main.h"
#include <stdio.h>
int ___strlen(char *s);
/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int len = ___strlen(s);
	int middle = len / 2;
	int i;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	
}


/**
 * _strlen - string lenght
 * @s: string
 * Return: lenght in int
 */
int ___strlen(char *s)
{
	int lent = 0;

	while (s[lent])
	{
		lent++;
	}
	return (lent);
}

