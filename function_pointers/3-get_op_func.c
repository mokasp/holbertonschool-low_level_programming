#include "3-calc.h"

/**
 * get_op_func - selects which function to use
 * @s: operator passed as argument *
 *
 * Return: pointer to function to use
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i])
	{
		if (s == ops[i][0])
			return (ops[i]);
	}
	return (NULL);
}
