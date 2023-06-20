#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: memory area pointer will be returned to
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *x = (unsigned char *)s;

	while (n--)
	{
		*x++ = b;
	}
	return (s);
}

