#include "main.h"
/**
 * print_last_digit - The prints the last digit of a number
 *@num: Variable identifier.
 *
 * Return: Always 0
 */
int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
		num = -num;
		_putchar(num + '0');

		return (num);
}
