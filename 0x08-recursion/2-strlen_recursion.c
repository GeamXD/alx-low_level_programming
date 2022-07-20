#include "main.h"

/**
 * _strlen_recursion - prints string lenght
 * @s: string parameter
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s++));
}
