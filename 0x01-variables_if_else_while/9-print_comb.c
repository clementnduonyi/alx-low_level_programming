#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_digit;

	while  (single_digit < 9)
	{
		putchar((single_digit % 10) + '0');
		if (single_digit == 9)
			continue;
		putchar(',');
		putchar(' ');
		single_digit++;
	}
	
	putchar('\n');

	return (0);
}
