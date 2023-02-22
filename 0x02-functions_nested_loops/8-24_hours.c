#include "main.h"


/**
  * jack_bauer - print every minute of the day
  * Return: void
  */

void jack_bauer(void)
{
	int j, k, l, m;

	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 4; k++)
		{
			for (l = 0; l < 6; l++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(j);
					_putchar(k);
					_putchar(':');
					_putchar(l);
					_putchar(m);
				}
			}

		}
	}
	_putchar('\n');
}
