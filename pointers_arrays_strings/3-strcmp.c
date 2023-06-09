#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int y, i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			y = s1[i] - s2[i];
			return (y);
		}
	}
	return (0);
}
