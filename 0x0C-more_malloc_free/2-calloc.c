#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory for an array
  * @nmemb: number of hytes to allocate
  * @size: size of pointer variable.
  *
  * Return: return pointer to memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	p = calloc(nmemb, sizeof(int));
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	return (p);
}