#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase except e and q
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if ((alphabet != 'e') && (alphabet != 'q'))
			putchar(alphabet);

	putchar('\n');
	return (0);
}
