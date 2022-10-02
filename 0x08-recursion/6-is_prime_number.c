#include "main.h"
/**
 * find_prime - check if a given number is prime
 * @x: number to be check
 * @y: number to check through
 *
 * Return: 1 or 0
 */
int find_prime(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
	{
		find_prime(x, y + 1);
	}
	return (1);
}

/**
 * is_prime_number - Check for prime numbers
 * @n: number to be check if its a prime number
 *
 * Return: 1 if it is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
