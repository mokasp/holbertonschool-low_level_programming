#include "lists.h"
/**
 * dlistint_len - finds number of elements in a doubly linked list
 * @h: head of doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	if (h == NULL)
		return (elements);
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
