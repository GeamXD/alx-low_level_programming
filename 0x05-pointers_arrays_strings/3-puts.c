#include "main.h"
/**
 * _puts - prints string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
