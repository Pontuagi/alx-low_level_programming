#include "function_pointers.h"

/**
  * int_index - search for an interger
  * @array: array
  * @size: size of array
  * @cmp: pointer to compare
  *
  * Return: index of interger that matches
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
