#include "main.h"
/**
 * pdrom_checker - Check for a string with same reversed meaning
 * @i: character at index 0
 * @len: character at last index
 * @str: String
 *
 * Return 1 or 0
 */
int pdrom_checker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (pdrom_checker(str, len - 1, i + 1));
	if(str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to check the length of
 *
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int left_most = 0;
	int length = _strlen_recursion(s) - 1;

	return (pdrom_checker(s, length, left_most));
}
