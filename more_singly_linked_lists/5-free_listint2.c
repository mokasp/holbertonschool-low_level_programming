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
		return;
	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		free(tmp);
	}
	(*head) = NULL;
}
