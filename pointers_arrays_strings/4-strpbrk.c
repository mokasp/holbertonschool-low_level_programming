#include "main.h"
#include <stdbool.h>

/**
 * _strspn - prints number of matching bytes
 * @s: initial string
 * @accept: string to compare to
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, q, w, x;

	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		w = 0;
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (s[i] == accept[q])
			{
				x++;
				w = 1;
			}
		}
		if (w == 0)
		{
			return (x);
		}
	}
	return (x);
}
