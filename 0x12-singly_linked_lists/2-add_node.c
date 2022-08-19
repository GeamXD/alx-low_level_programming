#include "lists.h"

/**
 * add_node -> adds a new node at the beginning
 * @head: double pointer to head address
 * @str: new string being added
 * Return: Address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
