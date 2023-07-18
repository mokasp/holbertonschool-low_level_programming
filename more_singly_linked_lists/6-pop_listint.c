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
	listint_t *tmp;

	if ((*head) == NULL)
		return (0);
	tmp = (*head);
	data = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (data);
}
