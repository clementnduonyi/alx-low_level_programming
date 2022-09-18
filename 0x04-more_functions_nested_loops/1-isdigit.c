#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * Return: 1 if c is digit between 1 and 9 and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
