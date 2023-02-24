#include "main.h"

/**
  * print_diagonal - print a diagonal
  * @n: variable
  */

void print_diagonal(int n)
{
	int m, p;

	for (m = 1; m <= n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
