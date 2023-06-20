#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: second string
 * @src: first string
 * @n: size of src
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
