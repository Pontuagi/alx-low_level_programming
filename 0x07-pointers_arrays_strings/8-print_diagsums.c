#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - print sum of diagonals
  * @a: array matrix
  * @size: size of our matrix
  */

void print_diagsums(int *a, int size)
{
	int sum = 0, sum0 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum = sum  + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum0 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum0);
}
