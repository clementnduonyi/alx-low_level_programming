#include "main.h"
/**
 * *_strncat - Concatenates two strings.
 * @dest: string1
 * @src: string2
 * @n: bytes count
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
