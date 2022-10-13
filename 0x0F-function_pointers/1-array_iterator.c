#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array of element
 * @size: size of array
 * @action: pointer a function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		p(array[i]);
}
