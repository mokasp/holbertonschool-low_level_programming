#include "main.h"

/**
 * flip_bits - finds number of bits needed to flip a number into another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}

/**
 * count_bits - counts bits
 * @x: second number
 *
 * Return: number of bits needed to flip bits
 */

unsigned int count_bits(unsigned long int x)
{
	unsigned int count;

	count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
