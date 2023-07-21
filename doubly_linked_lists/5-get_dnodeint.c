#include "lists.h"
/**
 * *get_dnodeint_at_index - get node at nth index
 * @head: pointer to pointer to head of doubly linked list
 * @index: position
 *
 * Return: address of nth element on success, NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int cnt;

	tmp = head;
	if (tmp == NULL)
		return (NULL);
	for (cnt = 0; tmp->next; cnt++)
	{
		if (cnt == index)
			return (tmp);
	}
	return (NULL);
}
