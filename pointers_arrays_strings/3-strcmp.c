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
	int x, y, i;

	for (i = 0; s1[i]; i++)
	{
		for (x = 0; s2[x]; x++)
		{
			if (s1[i] != s2[x])
			{
				y = s1[i] - s2[x];
				return (y);
				break;
			}
			else
			{
				return (0);
			}
		}
	}
	return (0);
}
