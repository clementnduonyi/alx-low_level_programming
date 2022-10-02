#include "main.h"
/**
 * find_sqr - returns the natural square root of a number.
 * @x: number whose square is to be return
 * @y: number to test for square
 *
 * Return: Square root of number
 */
int find_sqr(int x, int y)
{

	if ((y * y) > x)
		return (-1);

	else if ((y * y) == x)
		return (y);

	else
		return (find_sqr(x, y + 1));

	return (1);
}

/**
 * * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqr(n, 1));
}
