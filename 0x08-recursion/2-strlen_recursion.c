#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: String
 *
 * Return: number of character in a string
 */
int _strlen_recursion(char *s)
{
	int str_count = 0;

	if (*s != '\0')
	{
		str_count = 1;
		return(str_count + _strlen_recursion(s + 1));
	}
	return (0);
}
