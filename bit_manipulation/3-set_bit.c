#include "main.h"

/**
 * set_bit - sets value of a bit at a given index value to 1
 * @n: pointer to number
 * @index: index
 *
 * Return: void
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = 1 << index;
	*n = (*n | bit);

	return (1);
}
