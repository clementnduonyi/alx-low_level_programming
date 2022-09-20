#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: integer1
 * @b: interg2
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swapped = *a;

	*a = *b;
	a = b;

	*b = swapped;


}
