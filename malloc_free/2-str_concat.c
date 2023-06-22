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
	size_t str1, str2, str3, i = 0;
	char *p;
	int len1, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	str1 = len1;
	str2 = len2;
	str3 = str1 + str2 + 1;
	p = malloc(str3);

	while (*s1 != '\0')
	{
		p[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		p[i] = *s2;
		s2++;
		i++;
	}

	if (str3 == NULL)
		return (NULL);

	p[i] = '\0';

	return (p);
}
