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

	data = 0;
	if ((*head) == NULL)
		return (0);
	if ((*head)->next == NULL)
		return(data);
	data = (*head)->n;
	(*head)->n = (*head)->next->n;
	temp = (*head)->next;
	(*head)->next = (*head)->next->next;
	free(temp);
	return (data);
}