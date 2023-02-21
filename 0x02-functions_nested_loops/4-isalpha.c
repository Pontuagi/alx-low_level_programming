#include "main.h"
#include <ctype.h>
/**
  * _isalpha - entry point
  * @c: character to check
  * Return: return 1 is c is a letter else 0
  */

int _isalpha(int c)
{
	int j;

	if (isalpha(c))
		j = 1;
	else
		j = 0;
	return (j);
}
