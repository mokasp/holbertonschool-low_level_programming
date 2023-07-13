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
	
	head = h;
	node_cnt = 0;

	while (node != NULL)
	{
		printf("[%d] %s\n", head->len, head->str);
		node = h->next;
		node_cnt++;
	}
	
	else
		printf("[0] (nil)");

	return (node_cnt);
}
