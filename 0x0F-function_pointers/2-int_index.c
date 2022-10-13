#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: array of integer.
 * @size: size of array.
 * @cmp: pointer function
 *
 * Return: The integer if the search is successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*cp)(int);

	cp = cmp;
	
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cp(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
	
