#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @str: pointer to string
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] >= 0 && str[i - 1] <= 47 && str[i - 1] != 45)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
