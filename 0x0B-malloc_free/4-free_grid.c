#include <stdlib.h>
#include "main.h"
/**
 * free_grid - rees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: the grid to be freed
 * @grid: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
