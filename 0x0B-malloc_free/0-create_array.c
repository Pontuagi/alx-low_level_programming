#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * create_array - create an array of chars
  * @size: size of array
  * @c: spsecific char
  *
  * Return: return pointer to array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *be;

	be = malloc(size * sizeof(char));
	for (; i < size; i++)
		be[i] = c;

	if (be == NULL)
		printf("failed to allocate %d bytes", size);

	if (size == 0)
	{
		return (NULL);
	}
	return (be);
}
