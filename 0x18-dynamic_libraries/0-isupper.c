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
	int i;

	if (isupper(c))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
