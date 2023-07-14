#include "main.h"

/**
 * get_bit - returns value of a bit at a given index value
 * @n: number
 * @index: index
 *
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
