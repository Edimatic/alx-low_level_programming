#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - get an operation
 * @s: operator
 * Return: Nothing after execution
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
	int vm = 0;

	while (ops[vm].op)
	{
		if (strcmp(s, ops[vm].op) == 0)
		{
			return (ops[vm].f);
		}
		vm++;
	}
	printf("Error\n");
	exit(99);
}
