#include "main.h"
/**
 * print_alphabet_x10 - prints 10 lines of alphabets, followed by new line.
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char alpha;

	while (counter <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		counter++;
		_putchar('\n');
	}
}
