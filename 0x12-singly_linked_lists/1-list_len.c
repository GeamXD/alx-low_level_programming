#include "lists.h"

/**
 * list_len -> length of list
 * @h: points to address of h
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
