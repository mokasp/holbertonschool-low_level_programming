#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, x, y;
	unsigned int z;

	i = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			if (x < 0)
				x = -x;
			else
				x--;
		if (s[i] >= '0' && s[i] <= '9')
			y = s[i] - 48;
			z = z * 10 + y;
			i++;
		else if (z == 0)
			i++;
		else
			break;
	}
	if (x < 0)
		z = -z;
	return (z);
}
