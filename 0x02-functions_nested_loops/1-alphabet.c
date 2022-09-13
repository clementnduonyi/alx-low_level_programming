#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase, followed by new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
