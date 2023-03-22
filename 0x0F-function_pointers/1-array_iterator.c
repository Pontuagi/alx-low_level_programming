#include "function_pointers.h"

/**
  * array_iterator - iterate a function through an array
  * @array: pointer to array
  * @size: size of array
  * @action: funtion
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;
	

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
