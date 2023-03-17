#include "main.h"
#include <stdlib.h>

/**
  * array_range - create array of intergers
  * @min: start of array
  * @max: End of array
  *
  * Return: pointer to array.
  */

int *array_range(int min, int max)
{
	int *rp;
	int n = max - min;
	int i, j;

	if (min > max)
		return (NULL);
	rp = ((int *)malloc(sizeof(int) * n));
	if (rp != NULL)
	{
		for (i = min + 1; i <= max; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					rp[j] = i;
			}
		}
	}
	return (rp);
}
