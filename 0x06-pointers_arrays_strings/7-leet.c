#include "main.h"
/**
 * *leet - Encodes a string into 1337.
 * @c: Pointer
 *
 * Return: c
 */
char *leet(char *c)
{
	int a = 0, n[5] = {4, 3, 0, 1, 7}, b = 0;
	char character[10] = "AaEeOoLlTt";

	for (; c[a]; a++)
	{
		for (b = 0; (c[a] != character[b] && b < 10); b++)
			;
		if (c[a] == character[b])
		{
			b /= 2;
			c[a] = (n[b] + '0');
		}
	}
	return (c);
}
