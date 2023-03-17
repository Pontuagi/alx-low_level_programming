#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory using malloc
  * @b: amount of memory to allocate
  * Return: null if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *ch;
	int n = 98;

	ch = malloc(b);
	if (ch == NULL)
	{
		exit(n);
	}
	return (ch);
}
