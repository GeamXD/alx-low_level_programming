#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates an array
 * @array: array being checked
 * @size: size of array
 * @action: function pointers
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;
	if (array == NULL || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
