#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid- allocates a 2 dimensional array of integers with all
 *values initialized to 0
 *@width: the width of the grid to be generated
 *@height: the height of the grid to be generated
 *
 *Return: pointer to the generated grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;
	int k;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
		for (k = 0; k < i; k++)
		{
			free(grid[k]);
		}
		free(grid);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
