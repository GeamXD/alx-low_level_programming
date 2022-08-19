#include "lists.h"

/**
 * free_list -> deletes entire node
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
