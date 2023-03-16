#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory using malloc
  * @b: amount of memory to allocate
  * Return: null if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	int *ch;
	int n = 98;

	ch = malloc(b * sizeof(int));
	if (ch == NULL)
	{
		exit (n);
	}
	return (ch);
}
