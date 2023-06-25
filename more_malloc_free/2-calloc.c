#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocate multiple blocks of mem w same size
 * @nmemb: bumber of block
 * @size: size of block
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = (unsigned int *)malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
