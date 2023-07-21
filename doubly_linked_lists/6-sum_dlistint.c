#include "lists.h"
/**
 * sum_dlistint - get node at nth index
 * @head: pointer to pointer to head of doubly linked list
 *
 * Return: address of nth element on success, NULL if failed
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
