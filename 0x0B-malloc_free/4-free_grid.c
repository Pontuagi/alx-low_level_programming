#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a function previously created
  * @grid: pointer to free
  * @height: width
  */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
		}
		free(grid[i]);
	}
	free(grid);
}
