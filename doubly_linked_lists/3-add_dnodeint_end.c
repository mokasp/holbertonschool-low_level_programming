#include "lists.h"
/**
 * getnewnode2 - create a new node
 * @data: data to put in node
 *
 * Return: address of new element
 */
dlistint_t *getnewnode2(int data)
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
 * *add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to pointer to head of doubly linked list
 * @n: data for node
 *
 * Return: address of new element on success, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = getnewnode2(n);
	dlistint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
