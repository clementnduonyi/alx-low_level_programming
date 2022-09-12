#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char base_16;

	for (base_16 = 0; base_16 <= 16; base_16++)
	{
		if (base_16 <= 9)
			putchar((base_16 % 10) + '0');
		if (base_16 > 9)
	        	for (base_16 ='a'; base_16 <= 'f'; base_16++)
				putchar(base_16);
	}

	putchar('\n');

	return (0);
}
