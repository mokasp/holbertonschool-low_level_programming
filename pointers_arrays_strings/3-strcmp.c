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
	int x;

	x = s1[0] - s2[0];

	if (x < 0)
		return (x);
	else if (x > 0)
		return (x);
	else
		return (0);
}
