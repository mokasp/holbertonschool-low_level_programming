#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - check if memory is allocated
 * @b: amount of ints
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
