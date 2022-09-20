#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string pointer varible
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int str_counter;

	str_counter = 0;
	while (*s != '\0')
	{
		str_counter++;
		s++;
	}

	return (str_counter);
}
