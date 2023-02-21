#include "main.h"

/**
  * print_sign - check if a number is positive or negative
  * @n: number to iterate
  * Desprition: Using if to check the value of a number against 0
  * Return: return int
  */

int print_sign(int n)
{
	int f;

	if (n > 0)
	{
		f = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		f = 0;
		_putchar('0');
	}
	else
	{
		f = -1;
		_putchar('-')
	}
	return (f);
}
