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
	int n, i;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	rp = (malloc(sizeof(int) * n));
	if (rp != NULL)
	{
		for (i = 0; min <= max; i++)
		{
			rp[i] = min++;
		}
	}
	return (rp);
}
