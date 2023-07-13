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
		return (0);

	if (h->str == NULL)
	{
		h = "";
		printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_cnt++;
	}

	return (node_cnt);
}
