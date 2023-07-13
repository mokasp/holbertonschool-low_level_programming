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
	head = strdup(str);
	free(head);

	if (head == NULL)
		return (NULL);

	return (head);
}
