#include <string.h>
#include "main.h"

/**
 * _strchr - strchr
 * @s: parameter
 * @c: parameter
 * Return: strchr
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (0);
}
