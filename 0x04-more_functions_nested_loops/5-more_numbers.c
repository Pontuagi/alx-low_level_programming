#include "main.h"

/**
  * more_numbers - function to print numbers
  */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
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
