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
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	free(new_node->str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node->next;

	return (&head);
}
