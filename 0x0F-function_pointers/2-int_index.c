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

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
