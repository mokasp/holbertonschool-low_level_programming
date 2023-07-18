#include "lists.h"
/**
 * um_listint - finds sum of all data of a singly linked list
 * head: pointer to first element
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		prt = ptr->next;
	}
	return (sum);
}
