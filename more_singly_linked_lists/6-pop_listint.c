#include "lists.h"

/**
 * pop_listint - deletes head node of a singly linked list
 * @head: pointer to first element
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if ((*head) == NULL)
		return (0);
	data = (*head)->n;
	if ((*head)->next != NULL)
	{
		(*head)->n = (*head)->next->n;
		temp = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(temp);
	}
	else

	return (data);
}
