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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			w = argv[i];

			for (x = 0; x < strlen(w); x++)
			{

				if (w[x] < 48 || w[x] > 57)
				{
					printf("Error\n");
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
		printf("0\n");
	}

	return (0);
}
