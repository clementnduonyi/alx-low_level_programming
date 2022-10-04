#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: String pointer
 *
 * Return: String characters
 */
char *_strdup(char *str)
{
	char *strptr;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	strptr = malloc(sizeof(char) * (i + 1));

	if (strptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		strptr[j] = str[j];
	strptr[j + 1] = 0;
	return (strptr);
}
