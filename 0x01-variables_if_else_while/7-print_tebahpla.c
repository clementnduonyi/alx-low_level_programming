#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverseAlphabet;

	for (reverseAlphabet = 'z'; reverseAlphabet >= 'a'; --reverseAlphabet)
		putchar(reverseAlphabet);
	putchar('\n');	
	return (0);
}
