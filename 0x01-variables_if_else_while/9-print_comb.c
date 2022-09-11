#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		putchar((single_digit % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
