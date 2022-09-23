#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase.
 * @c: Pointer to the character
 * Return: Character
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 97 + 65;
		}
		i++;
	}
	return (c);
}