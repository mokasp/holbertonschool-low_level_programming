#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to first element
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	head = NULL;
}
