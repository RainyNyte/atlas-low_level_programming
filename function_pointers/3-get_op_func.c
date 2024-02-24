#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - determines the function from op_func.c to use
 * @s: the operator
 *
 * Return: the operator required.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
