#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: String to be printed
 *
 * Return: 0
 */
void puts2(char *str)
{
	int c;
	
	c = 0;
	while (str[c] != '\0')
	{
		if ((c % 2) == 0 )
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
