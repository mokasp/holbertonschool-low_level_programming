#include "lists.h"

/**
 * pop_listint - deletes head node of a singly linked list
 * @head: pointer to first element
 *
 * Return: head node's data
 */

int free_listint(listint_t **head)
{
	if (head == NULL)
		return (0);
	temp = head;
	head = head->next;
	free(temp);
	return (head->n)
}
