#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times to print the character
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int l1, l2;

	if (n > 0)
	{
		l1 = 0;
		while (l1 < n)
		{
			l2 = 0;
			while (l2 < l1)
			{
				_putchar(' ');
				l2++;
			}
			_putchar('\\');
			_putchar(10);
			l1++;
		}
	}
	else if (n <= 0)
	{
		_putchar(10);
	}
}
