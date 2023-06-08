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
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
