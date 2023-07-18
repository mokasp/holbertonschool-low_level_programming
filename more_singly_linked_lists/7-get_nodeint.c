#include "lists.h"
/**
 * get_nodeint_at_index - gets node at a certain index in a linked list
 * @head: pointer to first element
 * @index: index of node
 *
 * Return: node at a specific index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int cnt;

	tmp = head;
	cnt = 0;

	if (head == NULL)
		return (NULL);

	for (cnt = 0; head->next; cnt++)
	{
		if (cnt == index)
			return (tmp);
	}
	return (tmp);
}
