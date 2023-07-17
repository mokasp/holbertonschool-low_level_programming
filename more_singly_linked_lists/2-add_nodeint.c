#include "lists.h"

/**
 * *add_nodeint - adds node to beginning of linked list
 * @head: pointer to pointer to first element
 * @n: pointer to singly linked list
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int new_int;
	
	new_int = n;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = new_int;
	new_node->next = (*head);
	*head = new_node;

	return (new_node);
}
