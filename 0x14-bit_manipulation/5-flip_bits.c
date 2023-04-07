#include "main.h"

/**
  * flip_bits - count the number of bits needed to be flipped to change number
  * @n: input number
  * @m: number neede to change to
  *
  * Return: number of bits needed to fipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
