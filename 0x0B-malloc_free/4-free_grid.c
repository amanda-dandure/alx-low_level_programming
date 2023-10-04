#include "main.h"
#include "stdlib.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: This is the multidiensional array of int
 * @height: This is the height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
