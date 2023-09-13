#include <stdio.h>
#include <math.h>


/**
 * jump_search - a function that searches for a value in a sorted
 *	array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: Value to search for
 *
 * Return: the index value is located in or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, i;
	size_t prev = 0;
	size_t current;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = (size_t)sqrt(size);
	current = jump_step;


	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += jump_step;
	}

	for (i = prev; i < size && i <= current; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
