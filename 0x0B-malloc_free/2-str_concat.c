#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concated_str;
	unsigned int len1;
	unsigned int len2;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int concatlen;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;

	concatlen = len1 + len2;

	concated_str = malloc(sizeof(char) * concatlen + 1);

	if (concated_str == NULL)
		return (NULL);

	while (i < len1)
	{
		concated_str[i] = s1[i];
		i++;
	}
	while (i <= concatlen)
	{
		concated_str[i] = s2[j];
		i++;
		j++;
	}
	return (concated_str);
}
