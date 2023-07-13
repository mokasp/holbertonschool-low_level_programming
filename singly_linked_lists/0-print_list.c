#include "lists.h"

/**
 * print_list - prints all elements of a singly linked list
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_cnt;

	node_cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		node_cnt++;
		h = h->next;
	}

	return (node_cnt);
}
