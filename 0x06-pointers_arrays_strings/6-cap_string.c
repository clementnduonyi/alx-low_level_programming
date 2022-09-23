#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string.
 * @c: Character pointer
 *
 * Return: c
 */
char *cap_string(char *c)
{
	char *separator = " \t\n,;.!?\"(){}";
	int i = 0, j = 0, cap = 1, k = 0;

	for (; c[i]; i++)
		for (; j < i; j++)
		{
			if (c[j] >= 65 && c[j] <= 90)
				cap = 0;
			if ((c[j] >= 97 && c[j] <= 122) && cap == 1)
			{
				c[j] = ((c[j] - 97) + 65);
				cap = 0;
			}
			for (k = 0; separator[k]; k++)
			{
				if (c[j] == separator[k])
				{
					cap = 1;
					if (!(c[j + 1] <= 122 && c[j + 1] >= 97))
						cap = 0;
				}
			}
		}
	return (c);
}
