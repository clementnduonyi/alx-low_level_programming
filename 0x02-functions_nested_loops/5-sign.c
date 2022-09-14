#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *@n: a number
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	if (n == 0)
		_putchar(0);
	return (0);
	if (n < 0)
		_putchar(-1);
	return (-1);

	_putchar('\n');
}




