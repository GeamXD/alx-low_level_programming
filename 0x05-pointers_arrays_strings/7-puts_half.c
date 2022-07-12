#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half
 * @str: string parameter
 */
void puts_half(char *str)
{
	int len = strlen(str) - 1;
	int hlen = len / 2;
	int i;

	for (i = hlen + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
