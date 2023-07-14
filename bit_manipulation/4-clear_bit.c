#include "main.h"

/**
 * clear_bit - sets value of bi to 0 at given index
 * @n: pointer to number
 * @index: index
 *
 * Return: void
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = 1 << index;
	if (*n & bit)
		*n ^= bit;

	return (1);
}
