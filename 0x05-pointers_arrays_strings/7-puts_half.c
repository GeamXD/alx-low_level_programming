#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half
 * @str: string parameter
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, hlen;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

	if (len % 2 != 0)
	{
		hlen = (len - 1) / 2;
		for (i = hlen - 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
