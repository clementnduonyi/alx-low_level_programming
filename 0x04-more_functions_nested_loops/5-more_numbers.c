#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	char n, num;

	for (i = 0; i <= 9; i++)
	{
		num = 0;
		while (num <= 14)
		{
			n = num;
			if (n >= 10)
			{
				_putchar('1');
				n = n % 10;
			}
			_putchar('0' + n);
			num++;
		}
		_putchar(10);
	}
}
