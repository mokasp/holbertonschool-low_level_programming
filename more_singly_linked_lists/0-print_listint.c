#include "lists.h"

/**
 * print_listint - prints all elements of a singly linked list
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node_cnt;

	node_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_cnt++;
		h = h->next;
	}

	return (node_cnt);
}
