#include "main.h"

/**
 * _strlen -- return lenght of string
 * @*s: string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
