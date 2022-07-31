#include "main.h"
int _strlen(char *s);
/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int lent = 0;

	while (s[lent])
	{
		lent++;
	}
	return (lent);
}

