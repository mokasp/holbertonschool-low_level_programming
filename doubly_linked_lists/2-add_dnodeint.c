#include "lists.h"
/**
 * getnewnode - create a new node
 * @n: date to put in node
 *
 * Return: address of new element
 */
dlistint_t *getnewnode(int data)
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
 * *add_dnodeint - add node to beginning of doubly linked list
 * @head: pointer to pointer to head of doubly linked list
 * @n: data for node
 *
 * Return: address of new element on success, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = getnewnode(n);

	if (head == NULL)
	{
		head = new_node;
		return (new_node);
	}
	head->prev = new_node;
	new_node->next = head;
	head = new_node;
	return (new_node);
}
