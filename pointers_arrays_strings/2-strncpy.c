#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: second string
 * @src: first string
 * @n: size of src
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
