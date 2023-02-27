#include "main.h"
#include <string.h>

/**
  * puts_half - print last half of a string
  * @str: string
  */

void puts_half(char *str)
{
	int i, length, mid;

	length = strlen(str);
	if (length % 2 == 0)
		mid = length / 2;
	else
		mid = (length - 2) / 2;
	for (i = mid; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
