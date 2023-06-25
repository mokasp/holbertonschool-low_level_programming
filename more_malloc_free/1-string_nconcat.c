#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *allocate - allocate mem
 * @n: amount of bytes
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (Success)
 */

void *allocate(char *s1, char *s2, unsigned int n)
{
	int w;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
	{
	}

	mem = (char *)malloc(sizeof(char) * n + w + 1);

	if (mem == NULL)
		return (NULL);

	return (mem);
}

/**
 * *string_nconcat - concat two strings
 * @n: number of ints
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	p = allocate(s1, s2, n);
	if (p == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';

	return (p);
}
