#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: 
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, len, w, x, y, z;

	i = 0;
	len = 0;
	w = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && y == 0)
	{
		if (s[i] == '-')
			++w;

		if (s[i] >= '0' && s[i] <= '9')
		{
			z = s[i] - '0';
			if (w % 2)
				z = -z;
			x = x * 10 + z;
			y = 1;
			if (s[i + 1] <= '0' || s[i + 1] >= '9')
				break;
			y = 0;
		}
		i++;
	}
	if (y == 0)
		return (0);
	return (x);
}
