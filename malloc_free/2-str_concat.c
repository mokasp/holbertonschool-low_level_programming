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
	int i, x, str1, str2;
	char *p;

	x = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (str1 = 0; s1[str1] != '\0'; str1++)
	{
	}


	for ( = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (; s2[; i++)
	{
		p[i + str1] = s2[i];
	}
	p[str3 - 1] = '\0';
	
	if (str3 == 0)
		return (NULL);

	return (p);
}
