#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	result = op(num1, num2);

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result);

	return (0);
}
