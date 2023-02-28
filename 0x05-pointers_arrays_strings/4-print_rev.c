#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * print_rev - print string in reverse
  * @s: string to print
  */

void print_rev(char *s)
{
	int length = 0, i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
