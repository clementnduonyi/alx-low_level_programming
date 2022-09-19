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
			m = 0;
			while (m < size)
			{
				_putchar('#');
				m++;
			}
			k++;
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
