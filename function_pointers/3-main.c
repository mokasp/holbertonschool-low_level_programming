#include "3-calc.h"

/**
 * main - check the code
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
	num1 = atoi(argv[2]);
	ops = get_op_func(argv[2]);
	if (ops = NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = s(num1, num2);

	printf("%d\n", result);

	return (0);
}
