#include "main.h"

/**
  * times_table - function to print 9 times table
  * Return: void
  */

void times_table(void)
{
	int i, j, n, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				k = n % 10;
				l = (n - k) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(l + '0');
				_putchar(k + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
