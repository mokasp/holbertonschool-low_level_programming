#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - create array
 * @str: original string
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *dup;
	char *p;
	int len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dup = (char *)malloc(sizeof(char) * len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	p = dup;

	while (*str)
	{
		*p = *str;
		p++;
		str++;
	}

	*p = '\0';

	return (dup);
}
