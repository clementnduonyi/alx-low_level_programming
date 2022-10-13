#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs oparation requested by a user
 * @argc: argument counter
 * @argv: array of argument
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = (*p)(a, b);

	printf("%d\n", c);
	return (0);
}
