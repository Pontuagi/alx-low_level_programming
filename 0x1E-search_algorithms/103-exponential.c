#include <stdio.h>

/**
 * exponential_binary_search - a function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: the pointer to the first element of the array
 * @left: left sideor array
 * @right: right side of array
 * @value: the value to search for
 *
 * Return: The index of value or -1
 */
int exponential_binary_search(int *array, int left, int right, int value)
{
	int mid, i;

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

	}
	return (-1);
}


/**
 * exponential_search - a function that searches for a value in a sorted array
 *	of integers using the Exponential search algorithm
 * @array: the pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int left, right;

	if (array == NULL || size <= 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld]: [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

    return (exponential_binary_search(array, left, right, value));
}

