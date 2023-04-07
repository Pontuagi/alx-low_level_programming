#include "main.h"

/**
  * print_binary - print the binary of a number
  * @n: the number.
  */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int first = 0;

	while (mask)
	{
		if (n & mask)
		{
			first = 1;
			_putchar('1');
		}
		else
		{
			if (first)
				_putchar('0');
		}
		mask >>= 1;
	}
	if (!first)
		_putchar('0');
}
