#include "main.h"

/**
 * *leet - convert string into 1337
 * @s: pointer to string
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, w;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (w = 0; w < 10; w++)
		{
			if (s[i] == x[w])
			{
				s[i] = y[w];
			}
		}
	}

	return (s);
}
