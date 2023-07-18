#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to first element
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if ((*head) == NULL)
		free(head);
	current = (*head);
	tmp = (*head)->next;
	while (*tmp)
	{
		current = current->next;
		free(current);
		tmp = tmp->next;
	}
	(*head) = NULL;
}
