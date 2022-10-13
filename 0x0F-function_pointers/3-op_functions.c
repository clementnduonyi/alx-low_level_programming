#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two integers
 * @a: interger 1
 * @b: integer 2
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - suntract integer 1 from inetger two
 * @a: interger 1
 * @b: integer 2
 *
 * Return: different of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: interger 1
 * @b: integer 2
 *
 * Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integer 1 by integer two
 * @a: interger 1
 * @b: integer 2
 *
 * Return: Outcome  of division of two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find modulus of two integers
 * @a: interger 1
 * @b: integer 2
 *
 * Return: modulus of two integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
