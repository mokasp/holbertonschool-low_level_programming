#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - argc and argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Successful)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int x, sum;
	char *w;
	char str1[] = "Error";
	char str2[] = "0";

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			w = argv[i];

			for (x = 0; x < strlen(w); x++)
			{

				if (w[x] < 48 || w[x] > 57)
				{
					printf("%s\n", str1);
					return (1);
				}
			}

			sum += atoi(w);
			w++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%s\n", str2);
	}

	return (0);
}
