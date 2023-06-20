#include "main.h"
#include <stddef.h>

/**
 * *_strchr - searches the first occurence of char c
 * @s: string
 * @c: character tp be searched
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
