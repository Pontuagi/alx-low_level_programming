#include "main.h"

/**
  * print_number - print a number
  * @n: number to print
  */

void print_number(int n)
{
	int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}

	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
