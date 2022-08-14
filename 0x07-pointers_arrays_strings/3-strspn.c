#include <string.h>
#include "main.h"

/**
 * _strspn - strspn
 * @s: parameter
 * @accept: parameter
 * Return: strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned  int c = 0;
	char *m = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
					c++;
					break;
			}
		if (!(*--accept))
				break;
		accept = m;
	}
	return (c);
}
