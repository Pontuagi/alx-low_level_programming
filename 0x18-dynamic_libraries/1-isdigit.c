#include "main.h"
#include <ctype.h>

/**
  * _isdigit - check for digit
  * @c: variable to check
  * Return: return i
  */

int _isdigit(int c)
{
	int i;

	if (isdigit(c))
		i = 1;
	else
		i = 0;
	return (i);
}
