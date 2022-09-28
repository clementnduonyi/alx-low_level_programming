#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: pointer variable
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s) {
		if (*s != c)
			s++;
		else if (*s == c || c == '\0')
			return (s);
	}

	return (0);
}
