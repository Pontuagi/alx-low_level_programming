#include <ctype.h>
#include "main.h"

/**
  * _isupper - is or function name
  * @c: the variable to check
  * Description: check if a character is uppercase
  * Return: always zero
  */

int _isupper(int c)
{
	if (isupper(c))
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	return (0);
}
