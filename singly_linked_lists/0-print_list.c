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
	list_t *node;
	
	node = h;
	node_cnt = 0;

	if (node == NULL)
		printf("[0] (nil)");

	while (node != NULL)
	{
		printf("[%d] %s\n", head->len, head->str);
		node = h->next;
		node_cnt++;
	}

	return (node_cnt);
}
