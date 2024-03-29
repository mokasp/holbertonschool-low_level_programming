#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt;

	cnt = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
