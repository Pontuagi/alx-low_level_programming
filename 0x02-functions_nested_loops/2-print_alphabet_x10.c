#include "main.h"

/**
  *print_alphabet_x10 - prints the alphabet 10 times
  * Return: void
  */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; 1 < 11; 1++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
