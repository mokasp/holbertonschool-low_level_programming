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
	int new_int, cnt;

	new_int = n;
	cnt = 0;
	new_node = (listint_t *)malloc(sizeof(list_int));
	if (new_node == NULL)
		return (NULL);
	current = (*head);
	while (current != NULL)
	{
		current = current->next;
		cnt++
	}
	if (idx < 0 || idx > cnt)
		return (NULL);
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
		*tmp = *head;
	while (--idx)
		tmp = tmp->next;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
