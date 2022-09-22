#include "main.h"
/**
 * *_strncpy - Copies a string.
 * @dest: the destination string
 * @src: The source string
 * @n: source string count
 *
 * Return: String characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
