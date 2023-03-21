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
	unsigned int p;
	char *sc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sc = malloc(nmemb * size);
	if (sc == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		sc[p] = 0;

	return (sc);
}
