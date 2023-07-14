#include "main.h"

/**
 * 
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int i;

	conv = 0;
	i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		conv <<= 1;
		conv += b[i] - '0';
		i++;
	}
	return (conv);
}
