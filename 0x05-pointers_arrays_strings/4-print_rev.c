#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string being handled
 */
void print_rev(char *s)
{
	int leng = strlen(s);
    	int i;

    	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}