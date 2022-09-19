#include "main.h"
/**
 * print_square - Prints a square, followed by a new line.
 * @size: the size of square to be printed
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int square;
	
	square = 0;
	if (size > 0)
	{
		while (square < size)
		{
			_putchar('#');
			square++;
		}
	}
	_putchar('\n');
}
