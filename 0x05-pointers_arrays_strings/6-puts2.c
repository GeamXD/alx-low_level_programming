#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string being tested 
 */
void puts2(char *str)
{
	int len = strlen(str) - 1;
	int i;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
