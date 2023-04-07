#include "main.h"

/**
  * set_bit - set bit at a particular index to 1
  * @n: pointer to input number
  * @index: index to accesss
  *
  * Return: 1 if successfull otherwise -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1UL << index;
	*n |= m;

	return (1);
}
