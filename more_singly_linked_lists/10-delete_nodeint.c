#include "lists.h"
/**
 * delete_nodeint_at_index - 000
 * @head: pointer to first element
 * @idx:
 * @n: n
 *
 * Return: sum of all data
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i;

	current = *head;
	i = 0;
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < (index - 1))
	{
		i++;
		current = current->next;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
