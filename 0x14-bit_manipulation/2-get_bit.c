#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: the number
  * @index: the point to get the value
  *
  * Return: return the bit at index.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;

	if ((n & m) == m)
		return (1);

	return (0);
}
