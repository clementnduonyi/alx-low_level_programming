#include "main.h"
/**
 * print_square - Prints a square, followed by a new line.
 * @size: the size of square to be printed
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int k, m;

	if (size > 0)
	{
		k = 0;
		while (k < size)
		{
			_putchar('#');
			k++;

			m = 0;
			while (m < size)
			{
				_putchar('#');
				m++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
