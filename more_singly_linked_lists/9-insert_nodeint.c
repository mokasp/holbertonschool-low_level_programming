#include "lists.h"
/**
 * insert_nodeint_at_index - 0000
 * @head: pointer to first element
 * @idx: position to insert node
 * @n: new data
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *tmp;
	unsigned int new_int;

	new_int = n;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	while (--idx)
		tmp = tmp->next;
	new_node->n = new_int;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
