#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: array with name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
