#include <string.h>
#include "main.h"

/**
 * _strpbrk - strpbrk
 * @s: parameter
 * @accept: parameter
 * Return: strpbrk
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
