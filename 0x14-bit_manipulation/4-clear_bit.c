#include "main.h"

/**
  * clear_bit - set bit a particular index to 0
  * @n: pointer to input number
  * @index: point to set
  *
  * Return: 1 if successfull else -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;
	m = ~m;
	*n &= m;

	return (1);
}
