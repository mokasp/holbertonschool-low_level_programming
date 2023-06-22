#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array
 * @size: size of array
 * @c: character to fill array
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = (char *)malloc(size * sizeof(char));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);

}
