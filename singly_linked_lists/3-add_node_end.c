#include "lists.h"

/**
 * *add_node_end - adds node to end of linked list
 * @head: pointer to pointer to first element
 * @str: pointer to singly linked list
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	char *new_str;
	unsigned int new_len;

	new_len = strlen(str);
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		free(new_node);
	}
	new_node->str = new_str;
	new_node->len = new_len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
