#include "main.h"
#include <stdlib.h>

/**
  * print_last_digit - function to print last digit of a number
  * @j: digit to check
  * Return: last digit
  */

int print_last_digit(int j)
{
	int lstdgt = abs(j) % 10;

	_putchar(lstdgt + '0');
	return (lstdgt);
}
