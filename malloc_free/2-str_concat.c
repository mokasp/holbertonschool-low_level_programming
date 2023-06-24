#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, w, x;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
	{
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
	}

	p = (char *)malloc(sizeof(char) * x + w + 1);

	if (p == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);
}
