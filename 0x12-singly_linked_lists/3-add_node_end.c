#include "lists.h"

/**
 * add_node_end -> adds a node at the end
 * @head: double pointer to head
 * @str: string
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;
	size_t len = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	 /* Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* Change the next of last node */
	last->next = new_node;

	return (new_node);
}
