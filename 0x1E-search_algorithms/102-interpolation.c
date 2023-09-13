#include <stdio.h>

/**
 * interpolation_search - a function that searches for a value in a sorted
 *	array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t  pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				return (low);
			}
			return (-1);
		}

		pos = low + (((double)(high - low) / array[high] - array[low]))
			* (value - array[low]);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
