#include "main.h"

/**
 * _strcmp - copy a string
 * @dest: second string
 * @src: first string
 * @n: size of src
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 < s2)
		return (-15);
	else
		return (15);
}
