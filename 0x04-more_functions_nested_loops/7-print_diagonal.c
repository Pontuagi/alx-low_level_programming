#include "main.h"

/**
  * print_diagonal - print a diagonal
  * @n: variable
  */

void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (m = 1; m <= n; m++)
	{
		for (p = 1; p < m; p++)
		{
			if (p == m)
				_putchar('\\');
			else if (p < m)
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
