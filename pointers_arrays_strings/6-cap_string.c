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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\n' || str[i] == '\t')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}
	return (str);
}
