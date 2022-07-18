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
	return (strspn(s, accept));
}
