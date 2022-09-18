#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: length of line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int l;

	l = 0;
	if (n > 0)
	{
		while (l < n)
		{
			_putchar('_');
			l++;
		}
	}

	_putchar('\n');
}
