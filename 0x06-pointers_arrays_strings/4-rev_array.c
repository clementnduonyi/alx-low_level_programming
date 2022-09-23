#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Array of integers
 * @n: number of lements in the array
 *
 * Return Always 0
 */
void reverse_array(int *a, int n)
{
	int i, tmp, j = n - 1;

	i = 0;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
