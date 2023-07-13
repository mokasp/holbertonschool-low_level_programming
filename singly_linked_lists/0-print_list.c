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

	while (head != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)");
		printf("[%d] %s\n", head->len, head->str);
		head->next;
		node_cnt++
	}
	return (node_cnt);
}
