#include "main.h"
#include <stdio.h>

/**
  * print_array - print n arrays pf intergers
  * @a: our array
  * @n: the number of elements in an arrray
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
