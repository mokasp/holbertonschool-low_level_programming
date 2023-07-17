#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
