#include "main.h"

/**
  * print_triangle - print a triangle
  * @size: variable
  */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				int m,n;

				for (m = 0; m < size - j; m++)
				{
					_putchar(' ');
				}
				for (n = size - j; n <= size; n++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
