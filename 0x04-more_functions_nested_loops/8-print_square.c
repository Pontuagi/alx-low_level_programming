#include "main.h"

/**
  * print_square - print a square
  * @size: variable
  */

void print_square(int size)
{
	int m, k;

	if (size > 0)
	{
		for (m = 1; m <= size; m++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
