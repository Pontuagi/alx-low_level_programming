#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - print a 2d array
  * @width: rows
  * @height: columns
  *
  * Return: pointer to array
  */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		ar[i] = malloc(height * sizeof(int));
	return (ar);
}
