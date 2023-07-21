#include "lists.h"
/**
 * getnewnode3 - create a new node
 * @data: data to put in node
 *
 * Return: address of new element
 */
dlistint_t *getnewnode3(int data)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * getSize - create a new node
 * @node: node to get size of
 *
 * Return: size of dll
 */
unsigned int getSize(dlistint_t *node)
{
	unsigned int size = 0;

	while (node != NULL)
	{
		node = node->next;
		size++;
	}
	return (size);
}
/**
 * *insert_dnodeint_at_index - add node at index of doubly linked list
 * @h: pointer to pointer to head of doubly linked list
 * @n: data for node
 * @idx: position
 *
 * Return: address of new element on success, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = getSize(*h);
	dlistint_t *new_node, *tmp, *tmp2;

	if (size < idx)
		return (NULL);
	if (idx == size)
		add_dnodeint(h, n);
	else if (idx == size)
		add_dnodeint_end(h, n);
	else
	{
		tmp = *h;
		new_node = getnewnode3(n);
		while (--idx)
			tmp = tmp->next;
		tmp2 = tmp->next;
		new_node->next = tmp->next;
		new_node->prev = tmp;
		tmp->next = new_node;
		tmp2->prev = new_node;
	}
	return (new_node);
}
