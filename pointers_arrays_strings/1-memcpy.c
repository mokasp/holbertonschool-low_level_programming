#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	unsigned char *csrc = (unsigned char *)src;
	unsigned char *cdest = (unsigned char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
