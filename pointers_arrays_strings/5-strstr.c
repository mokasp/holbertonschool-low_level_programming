#include "main.h"
#include <stddef.h>

/**
 * *_strstr - return first occurance of substring in a string
 * @haystack: initial string to be searched
 * @needle: substirng
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}

		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
