#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first element
 * @idx:
 * @n: n
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;
	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
