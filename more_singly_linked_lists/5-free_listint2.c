#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to first element
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if ((*head) == NULL)
	{
		free(*head);
		return;
	}
	if (head == NULL)
	{
		free(*head);
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	(*head) = NULL;
}
