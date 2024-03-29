#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for integer
 * @array: parameter array
 * @size: size of array
 * @cmp: compares the array
 * Return: 0 if successful, -1 if no matches found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	i = 0;

	while (i < size)
		if (cmp(array[i++]))
			return (i - 1);
	return (-1);
}
