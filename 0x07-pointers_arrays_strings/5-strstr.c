#include <string.h>
#include "main.h"

/**
 * _strstr - strstr
 * @haystack: parameter
 * @needle: parameter
 * Return: strstr
 */
char *_strstr(char *haystack, char *needle)
{
	char *newhaystack = haystack;
	char *newneddle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			break;
		}
		if (!*needle)
			return (newhaystack);
		needle = newneddle;
		newhaystack++;
		haystack = newhaystack;
	}
}
