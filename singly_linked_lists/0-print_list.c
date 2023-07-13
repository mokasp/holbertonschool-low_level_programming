#include "lists.h"

/**
 * print_list: prints all elements of a singly linked list
 * @h: singly linked list
 *
 * Return: number of nudes
 */

size_t print_list(const list_t *h)
{
	int node_cnt;
	
	node_cnt = 0;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_cnt++;
	}

	return (node_cnt);
}
