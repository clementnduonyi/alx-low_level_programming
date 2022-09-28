#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string pointer
 * @accept: accepted substring
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					counter++;
			}

		}
		else
			return (counter);
	}
	return (counter);
}
