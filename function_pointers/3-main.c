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
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	result = op(num1, num2);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0) && (&argv[2] == '/' || &argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);

	return (0);
}
