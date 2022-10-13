#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user.
 * @s: The operator passed as argument
 *
 * Return: nothing
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

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
