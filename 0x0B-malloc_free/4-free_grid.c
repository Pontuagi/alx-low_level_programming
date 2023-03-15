#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a function previously created
  * @grid: pointer to free
  * @height: width
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
