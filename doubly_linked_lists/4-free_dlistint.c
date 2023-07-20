#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: head of doubly linked list
 *
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *tmp;

	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	head = NULL;
}
