#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: new string
 * @src: original string
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len])
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
