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

		for (k = 0; k < size; k++)
		{
			_putchar('#');

			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
