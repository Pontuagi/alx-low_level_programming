#include "main.h"

/**
  * print_number - function to print numbers
  * @n: interger
  */

void print_number(int n)
{
	int y;

	for (n = 0; n <= 9; n++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
			_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
