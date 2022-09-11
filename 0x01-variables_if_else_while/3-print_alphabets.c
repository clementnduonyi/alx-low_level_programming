#include <stdio.h>
/**
 * main - Prints the alphatebets in lowercase, then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase, upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);

	putchar('\n');

	return (0);
}
