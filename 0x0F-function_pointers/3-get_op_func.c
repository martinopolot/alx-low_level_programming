#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - funtion ptr to pick the right fun 
 * to perform the right operation by the user
 * @s: user operation
 *
 * Return: ptr to the func
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
	int j;

	j = 0;

	while (ops[j].op)
	{
		if (strcmp(ops[j].op, s) == 0)
			return (ops[j].f);
		++j;
	}
	return (NULL);
}
