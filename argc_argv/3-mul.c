#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc and argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Successful)
 */

int main(int argc, char *argv[])
{
	int result;
	char string[] = "Error";

	result = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", string);
		return (1);
	}
	return (0);
}
