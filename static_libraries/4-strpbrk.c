#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - finds first chara in s1 that matches any chara in str2
 * @s: initial string
 * @accept: string to compare to
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, q;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (*s == accept[q])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

