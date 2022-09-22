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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != src[n])
	{
		dest[i] = src[j];
			i++;
			j++;
	}
	/*dest[i] = '\0';*/
	return (dest);
}
