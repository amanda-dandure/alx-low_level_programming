#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of int
 * @width: This is the width of the array
 * @height: This is the height of the array
 * Return: A pointer to a array of int
 */

int **alloc_grid(int width, int height)
{
	int p, q;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		gridout[p] = malloc(width * sizeof(int));
		if (gridout[p] == NULL)
		{
			for (p--; p >= 0; p--)
			free(gridout[p]);
			free(gridout[p]);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
		for  (q = 0; q < width; q++)
			gridout[p][q] = 0;
	return (gridout);
}
