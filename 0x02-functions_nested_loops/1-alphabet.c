#include "main.h"

/**
  * print_alphabet - entry to our code
  * Return: Return 0 always
  */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
