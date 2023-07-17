#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to first element
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	head = NULL;
}
