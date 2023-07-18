#include "lists.h"
/**
 * pop_listint - deletes head node of a singly linked list
 * @head: pointer to first element
 * @index: index of node
 *
 * Return: head node's data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	int cnt;

	tmp = head;
	cnt = 0;

	if (head == NULL)
		return (NULL);

	for (cnt = 0; head->next; cnt++)
	{
		if (cnt == index)
			return (tmp);
	}

}
