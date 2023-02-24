#include "main.h"

/**
  * print_diagonal - print a diagonal
  * @n: variable
  */

void print_diagonal(int n)
{
	int m, p;

	if (n != 0)
	{
	for (m = 1; m <= n; m++)
	{
		for (p = 1; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	_putchar('\n');
}
