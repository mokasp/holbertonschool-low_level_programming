#include "lists.h"

/**
 * *add_node - adds node to beginning of linked list
 * @head: pointer to pointer to first element
 * @str: pointer to singly linked list
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t **new_head;
	struct list_t *new_node;
	
	new_node->str = strdup(str);
	free(new_node->str);

	if (new_node == NULL)
		return (NULL);

	new_head = &new_node;

	return (head);
}
