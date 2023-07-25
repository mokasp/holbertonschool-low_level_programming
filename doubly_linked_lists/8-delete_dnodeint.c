#include "lists.h"
/**
 * deleteNode  - delete a node
 * @head_ref: ref to head to compare
 * @del: node to be deleted
 *
 * Return: void
 */
void deleteNode(dlistint_t **head_ref, dlistint_t *del)
{
	if (*head_ref == NULL || del == NULL)
		return;
	if (*head_ref == del)
		*head_ref = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free(del);
}

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head
 * @index: position
 *
 * Return: 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL || index <= 0)
		return (-1);
	current = *head;
	for (i = 1; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);
	deleteNode(head, current);
	return (1);
}
