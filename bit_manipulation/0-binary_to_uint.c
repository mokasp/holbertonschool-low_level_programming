#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int i;

	conv = 0;
	i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (b[i] != '0' && b[i] != 1)
			return (0);
		else
		{
			conv <<= 1;
			conv += b[i] - '0';
			i++;
		}
	}
	return (conv);
}
