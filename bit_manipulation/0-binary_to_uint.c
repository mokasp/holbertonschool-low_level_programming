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

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			conv <<= 1;
			conv += b[i] - '0';
		}
		else
			return (0);
	}
	return (conv);
}
